# C_language
--------
## 대한상공회의소에서 받은 교육

1. Grammar C Language
2. Linked List
3. ATmel Project


---------
## ATmel Project - 원격 두더지 잡기
  ![image](https://user-images.githubusercontent.com/78605108/184518558-139186b5-2bf9-4263-8242-14d45b603887.png)
  ![image](https://user-images.githubusercontent.com/78605108/184518564-d6d56354-2d52-4e1c-a68b-eab9ff9bc13d.png)

-----------
> 개발환경
![image](https://user-images.githubusercontent.com/78605108/184518614-a9fe087e-eebf-48d1-94b8-be68c986e06e.png)

---------
> 기능

1. 등록된 카드로 RFID Tag를 진행. 그 후 금액이 차감되고 게임 시작.
2. Servo Motor가 회전하여 타겟이 올라오고 IR Remote로 해당 Servo 번호 입력
3. IR 신호를 받으면 LED  0.1초 On되며 해당 번호에 맞는 Servo Motor 각도 변환 & 점수 증가
4. 일정 시간내에 반복되는 입력은 감점 요소로 판단하여 감점
5. 상기 모든 과정은 LCD에 출력

---------------
> 동작영상
  1. Arduino끼리만
    https://youtu.be/_ICmJPCww5g
  2. Arduino와 ATmel
    https://www.youtube.com/watch?v=Xb8SpBx7FgU
  

------------
> 핵심코드
+ IR Interrupt 구성
  ![image](https://user-images.githubusercontent.com/78605108/184518499-1d7a1f7a-9808-4d42-b673-235a6ddd13ae.png)

+ Clock 분주 및 계산
  ![image](https://user-images.githubusercontent.com/78605108/184518507-e810b6ed-c093-46bf-ac2d-10c1c4583552.png)

+ LCD 제어
  + datasheet
    ![image](https://user-images.githubusercontent.com/78605108/184518518-cb48df77-7f16-438b-ab38-8d099dcd0221.png)
  + Code
    ![image](https://user-images.githubusercontent.com/78605108/184518527-0ad8f043-cd3b-4807-a8d5-1fa64bcb7075.png)


+ Servo 제어
  + datasheet
    ![image](https://user-images.githubusercontent.com/78605108/184518535-cddd32e2-b75a-4e44-ab03-aa0e474a72d1.png)
    ![image](https://user-images.githubusercontent.com/78605108/184518539-c15f5bb8-8e3e-4c63-85a5-7fbf08ecf6f4.png)

  + Code
    ![image](https://user-images.githubusercontent.com/78605108/184518547-6de501ff-3103-4382-8684-2e94e6820de8.png)

+ Uart 제어
  + datasheet
    ![image](https://user-images.githubusercontent.com/78605108/184518588-3a432ba5-9b07-4439-a54d-ccd76850a1ea.png)
  
  + Code
    ![image](https://user-images.githubusercontent.com/78605108/184518604-0d404e05-cbf9-4a2a-9155-30670a550e3b.png)

  


