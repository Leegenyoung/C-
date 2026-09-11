// **********************************************
// 제 목 : 배열 표현을 포인터(주소) 표현으로 변경하는 프로그램
// 날 짜 : 2026년 9월 11일
// 작성자 : 2600130 이건영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    int grade[5];
    int sum = 0, i, average;

    for (i = 0; i < 5; i++)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", grade + i);
    }

    for (i = 0; i < 5; i++)
        sum += *(grade + i);

    average = sum / 5.0;

    printf("성적 평균 = %d\n", average);

    return 0;
}
