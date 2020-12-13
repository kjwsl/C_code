// file: forsum.c
#include <stdio.h>

int main(void) {
    int i, sum;

    for (i = 1, sum = 0; i <= 10; i++)
        sum += i;   // sum = sum + i;
    printf("1에서 10까지 합: %3d\n", sum);

    for (i = 1, sum = 0; i <= 10;)
        sum += i++;
    printf("1에서 10까지 합: %3d\n", sum);

    for (i = 0, sum = 0; i <= 9;)
        sum += ++i;
    printf("1에서 10까지 합: %3d\n", sum);

    for (i = 1, sum = 0; i <= 10; sum += i++);  //반복몸체가 없는 for 문
    printf("1에서 10까지 합: %3d\n", sum);

    return 0;
}