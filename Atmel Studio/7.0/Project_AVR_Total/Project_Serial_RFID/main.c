/*
 * Serial.c
 *
 * Created: 2022-07-27 오전 11:49:56
 * Author : KCCI10
 */
#define F_CPU	14745600L
#include <string.h>
#include "LCD.h"
#include "UART.h"
#include "Servo.h"

 //#include "Remote.h"

#define ir_ready 0         // 리모컨 데이터 수신 대기 상태
#define ir_lead 1         // 리모컨 Lead code의 처음 에지검출 상태
#define ir_data 2         // 리모컨 Custom code, Data code 저장하는 상태

//-------------------------- IR sensor --------------------------------------
volatile unsigned char ir_rx_data[4];   // 4byte의 수신 데이터를 저장하기 위한 변수
volatile unsigned char ir_state;      // 리모컨 수신 데이터에 따른 현재의 상태 표시
volatile unsigned char ir_timer_cnt;   // 리모컨 수신 데이터의 길이를 위한 카운터 변수
volatile unsigned char ir_bit_cnt;      // 수신된 비트의 갯수를 저장하기 위한 변수
volatile unsigned char ir_rx_flag;      // 리모컨 데이터 수신 상태를 표시, 1: 데이터 수신
volatile unsigned char ir_rx_temp;      // 1byte의 데이터를 저장하기 위한 임시 데이터 변수
volatile unsigned char disp_led;
volatile unsigned char time_flag;
volatile unsigned char con = 0;
volatile unsigned char value_remote = 0;
unsigned long now_count = 0;

int count = 0;


ISR(INT6_vect)   // 외부 인터럽트 서비스 루틴, 하강 엣지 입력시 발생
{

	cli();   // 전역 인터럽트 비활성화
	//UART0_transmit('1');
	//Servo(-90);
	static unsigned int cnt = 0;
	static char temp = 0;
	cnt++;

	switch (ir_state)
	{
	case ir_ready:         // 이 상태는 인터럽트 걸리기 전의 상태
		ir_state = ir_lead;   // 대기상태에서 lead code의 하강 에지 검출 상태로 변경
		break;
	case ir_lead:         // Lead code 의 처음 하강 에지 검출 상태
		if ((ir_timer_cnt >= 130) && (ir_timer_cnt < 140)) // 하강 에지간의 시간 간격이 13msec~14mscr 사이라면
			ir_state = ir_data;      // Lead code로 인식하여 데이터 저장상태로 변경
		ir_bit_cnt = 0;         // 수신된 비트수를 초기화
		ir_rx_temp = 0;
		break;
	case ir_data:         // 비트를 분석하여 32개 비트(4바이트)를 저장하는 상태
		if ((ir_timer_cnt >= 9) && (ir_timer_cnt < 13)) {}
		else if ((ir_timer_cnt >= 19) && (ir_timer_cnt < 25))   // 1.9msec~1.3msec 사이의 범위라면 수신 비트의 값이 1이다.
			ir_rx_temp = ir_rx_temp | 0x80;
		else   // 수신된 신호가 데이터가 아니라면
		{
			ir_state = ir_lead;
			break;
		}
		ir_bit_cnt++;
		if ((ir_bit_cnt % 8) == 0) {
			ir_rx_data[(ir_bit_cnt / 8) - 1] = ir_rx_temp;
			// 8개의 데이터가 수신되면 값을 저장한다
			ir_rx_temp = 0;
			if (ir_bit_cnt >= 32) {
				ir_state = ir_ready;   // 모든 데이터가 수신되면 리모콘 신호 수신 대기 상태로 변경
				ir_bit_cnt = 0;
				ir_rx_flag = 1;
				if (temp != ir_rx_data[2]) {
					temp = ir_rx_data[2];
					time_flag = 1;
					PORTG = 0x00;   // 부져, LED 켜짐
				}
			}
		}
		ir_rx_temp = ir_rx_temp >> 1;
		break;
	default:
		break;
	}
	ir_timer_cnt = 0;
	TCNT0 = 0;         // 타이머0 카운트 값을 초기화

	sei();            // 인터럽트 재 활성화
}

ISR(TIMER2_COMP_vect)   // 타이머 카운터 2 인터럽트 서비스 루틴 100uS 주기 발생
{
	static int j = 0;
	ir_timer_cnt++;
	if (time_flag) {
		j++;
		if (j == 1000) {
			j = 0;
			time_flag = 0;
		}
	}
}


extern int AngleCount;
extern int t_cnt;

void Game_start();
void Timer0_init();

void Timer0_init() {
	DDRF = 0xff;
	//OCR0 = 131;
	PORTF = 0xff;
	TCCR0 |= (1 << CS02) | (0 << CS01) | (1 << CS00);
	TIMSK |= (1 << TOIE0) | (1 << OCIE2);
	AngleCount = 15; // 초기 서보 위치를 0도로 설정한다
	TCNT0 = 244;

	TCCR2 |= (1 << WGM21);   // CTC 모드(2) 8분주
	TCCR2 |= (1 << CS21);   // 분주비 8
	TCCR2 |= (1 << COM20);   // 토글 모드
	OCR2 = 183;   // 14745600Hz/8/(1+183) = 10000HZ, 100usec
	TCNT2 = 0;
	sei();
}

ISR(TIMER0_OVF_vect) {
	now_count++;
	TCNT0 = 244;
	t_cnt++;

	if (t_cnt <= AngleCount)
		PORTF = 0xff; // PWM ON Time
	else
		PORTF = 0x00; // PWM OFF Time
	if (t_cnt >= 200)
		t_cnt = 0; // 20[ms] 주기 PWM
}



unsigned char old_buff = 0;


int main(void)
{
	LCD_init();

	_delay_ms(1);
	LCD_write_string("Hello JMS");
	_delay_ms(1000);
	LCD_clear();
	UART_Init();
	Remote_Init();
	Timer0_init();

	PORTB = 0x00;
	//-------------------
	
	disp_led = 0xff;
	ir_rx_flag = 0;   // 센서 수신을 위한 변수 초기화
	ir_state = ir_ready;
	ir_timer_cnt = 0;
	ir_bit_cnt = 0;   // 외부 인터럽트 초기화
//--------------------

	char recv_msg[20];
	memset(recv_msg, 0, sizeof(recv_msg));
	int idx = 0;
	int game_flag = 0;
	while (1)
	{
		recv_msg[idx++] = UART1_receive();

		if (recv_msg[idx - 1] == 'L') {
			for (int jdx = 0; jdx < idx; jdx++) {
				UART0_transmit(recv_msg[jdx]);
				_delay_ms(10);
			}

			recv_msg[idx - 1] = '\0';
			char* pArray[10];
			char* ptr = strtok(recv_msg, "@");

			int i = 0;
			while (ptr != NULL) {

				pArray[i++] = ptr;
				ptr = strtok(NULL, "@");
			}

			if (i != 5) {
				idx = 0;
				memset(recv_msg, 0, sizeof(recv_msg));
				continue;
			}

			LCD_goto_XY(0, 3);
			LCD_write_string("CARD");
			LCD_goto_XY(1, 0);
			//LCD_write_string(pArray[3]);

			for (i = 0; i < 4; i++) {
				LCD_write_string(pArray[i]);
				if (i != 3) {
					LCD_write_string(":");
				}
			}

			_delay_ms(1000);
			LCD_clear();
			_delay_ms(1);
			LCD_goto_XY(0, 2);

			if (atoi(pArray[4]) != 0) {
				LCD_write_string("Rest Money");
				LCD_goto_XY(1, 4);
				LCD_write_string(pArray[4]);
				game_flag = 1;
			}

			else {
				LCD_write_string("NO Money...");
				game_flag = 0;
			}

			_delay_ms(1000);
			LCD_clear();

			memset(recv_msg, 0, sizeof(recv_msg));
			idx = 0;

		}

		if (game_flag == 1) {
			LCD_goto_XY(0, 2);
			_delay_ms(1);
			LCD_write_string("Game Start!");
			_delay_ms(1000);
			LCD_clear();
			Game_start();

			game_flag = 0;
			LCD_clear();
		}
	}
}




void Game_start() {
	now_count = 0;
	int score = 0;
	long push_time_1 = -20000;
	long push_time_2 = -20000;
	long ir_time = -1000;
	long led_time = -10000;
	//_delay_ms(1);
	char s[3] = "";
	while (1) // 무한루프
	{
		char time[5] = "";

		sprintf(time, "%d", now_count / 10000);
		sprintf(s, "%d", score);
		LCD_goto_XY(0, 0);
		LCD_write_string(s);
		LCD_goto_XY(1, 5);
		LCD_write_string(time);
		if (now_count >= 100000) break;
		if (ir_rx_data[2] != NULL) {
			if (now_count >= ir_time + 1000) {
				PORTB = 0xff;
				switch (ir_rx_data[2])
				{
				case 22: value_remote = 0; break;
				case 12: value_remote = 1; break;
				case 24: value_remote = 2; break;
				case 94: value_remote = 3; break;
				case 8: value_remote = 4; break;
				case 28: value_remote = 5; break;
				case 90: value_remote = 6; break;
				case 66: value_remote = 7; break;
				case 82: value_remote = 8; break;
				case 74: value_remote = 9; break;
				}
				memset(ir_rx_data, 0, sizeof(ir_rx_data));

				//------ Servo --------------------
				if (value_remote == 1)
				{
					if (now_count > push_time_1 + 20000) {
						score++;
						push_time_1 = now_count;
						Servo(90);
					}
					else {
						score--;
					}
				}

				/*
				if (value_remote == 2)
				{
					Servo(90);
					_delay_ms(3000);
				}
				if (value_remote == 3)
				{
					Servo(-90);
					_delay_ms(3000);
				}
				*/

				//-------------------------------------
				if (old_buff != ir_rx_data[2])   // 이전과 같은지 비교
				{
					old_buff = ir_rx_data[2];
					UART0_transmit(value_remote);
					//PORTB = 0x03;      // 부져, LED 동작
					_delay_ms(100);            // 100ms 지연
				}
				//else PORTB = 0x00;      // 부져, LED 멈춤

				ir_time = now_count;
				led_time = now_count;
			}
		}
		if(now_count>=led_time + 1000)
					PORTB = 0x00;
		if (now_count > push_time_1 + 19000) {
			Servo(0);
		}

	}
	
	Servo(0);
	LCD_clear();
	PORTB = 0xff;
	LCD_write_string("Game FInish");
	_delay_ms(1000);
	LCD_clear();
	_delay_ms(1);
	LCD_write_string("Total Score");
	LCD_goto_XY(1, 5);
	LCD_write_string(s);
	_delay_ms(1000);
	PORB = 0x00;
	LCD_clear();
}

