#include <stdio.h>
#include <stdlib.h>
#include "cpractice.h"
void quiz() {
	int usranswer, random;
	srand(time(NULL));
	random = rand() % 10;
	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == random) {
			printf("맞추셨군요! \n");
			break;
		}
		else {
			printf("틀렸어요! \n");
		}
	}

}

void testContinue() {
	int i;
	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;
		printf("%d ", i);
	}
}

/* do-while 먼저 명령을 실행하고 조건식을 검사 */
void testDoWhile() {
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 5);
	printf(" sum : %d \n", sum);

}

void printTriangle() {
	int n, a , j = 1, i=1;
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		if (i == 1) {
			printf("*\n");
			continue;
		}
		a = 2 * i - 1;
		for (j = 1; j <= a; j = j + 1) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = n; i >= 1; i--) {
		if (i == 1) {
			printf("*\n");
			continue;
		}
		a = 2 * i - 1;
		for (j = 1; j <= a; j++) {
			printf("*");
		}
		printf("\n");
	}
	
}

void testGoto(int *p)
{
	int num1 = *p;

	if (num1 == 1)         // num1이 1이면
		goto ONE;          // 레이블 ONE으로 즉시 이동
	else if (num1 == 2)    // num1이 2이면
		goto TWO;          // 레이블 TWO로 즉시 이동
	else                   // 1도 아니고 2도 아니면
		goto EXIT;         // 레이블 EXIT로 즉시 이동

ONE:    // 레이블 ONE
	printf("1입니다.\n");
	goto EXIT; // 레이블 EXIT로 즉시 이동

TWO:    // 레이블 TWO
	printf("2입니다.\n");
	goto EXIT; // 레이블 EXIT로 즉시 이동

EXIT:    // 레이블 EXIT
	return;
}