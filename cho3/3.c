// **********************************************
// 제 목 : 포인터를 이용하여 배열 원소의 합을 구하는 프로그램
// 날 짜 : 2026년 9월 11일
// 작성자 : 2600130 이건영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    int a[] = { 10, 20, 30 }, i, sum = 0;
    int *p = a;

    for (i = 0; i < 3; i++)
        sum += *p++;

    printf("sum:%d\n", sum);

    return 0;
}
