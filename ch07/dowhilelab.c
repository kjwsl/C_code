// file: forlab.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int input = 0, result = 0, digit = 0;
	int divider = 100;

	printf("���� ����[100~999] �Է� : ");
	scanf("%d", &input);
	result = input;
	do {
		digit = result / divider;
		result %= divider;
		printf("%3d���� ���: %d\n", divider, digit);
		divider /= 10;
	} while (divider >= 1);

	return 0;
}