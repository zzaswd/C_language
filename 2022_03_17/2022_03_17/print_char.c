#pragma once

#include "print_char.h"
#include <stdio.h>

void print_char(char ch, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	return;
}