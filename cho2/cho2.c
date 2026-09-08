// **********************************************
// 제 목 : 포인터를 이용한 변수 값 출력 프로그램
// 날 짜 : 2026년 9월 8일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    int a = -100;
    char b = 'A';
    double c = 3.14;

    int* pa = &a;
    char* pb = &b;
    double* pc = &c;

    printf("int형 변수 a의 값은 : %d\n", *pa);
    printf("char형 변수 b의 값은 : %c\n", *pb);
    printf("double형 변수 c의 값은 : %lf\n", *pc);

    return 0;
}
