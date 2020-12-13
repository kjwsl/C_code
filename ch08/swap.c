// file: swap.c
#include <stdio.h>

int main(void) {
	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	//변수 m과 n을 사용하지 않고 두 변수를 서로 교환
	int* p = &m;
	dummy = *p;
	*p = n;
	p = &n;
	*p = dummy;

	printf("%d %d\n", m, n);

	return 0;
}