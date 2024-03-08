#include <stdio.h>
#include "cpractice.h"
double getFahrenheit() {
	double celsius=0; // 섭씨 온도
	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
	printf("섭씨 온도를 입력해 주세요 : ");

	scanf("%lf", &celsius); // 섭씨 온도를 입력 받는다.

	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);
	return celsius;
}

void testScanf() {
	char ch; // 문자
	short sh; // 정수
	int i;
	long lo;
	float fl; // 실수
	double du;
	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);
	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf("%ld", &lo);
	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);
	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
}