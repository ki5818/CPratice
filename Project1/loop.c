#include <stdio.h>
#include <stdlib.h>
#include "cpractice.h"
void quiz() {
	int usranswer, random;
	srand(time(NULL));
	random = rand() % 10;
	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == random) {
			printf("���߼̱���! \n");
			break;
		}
		else {
			printf("Ʋ�Ⱦ��! \n");
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

/* do-while ���� ����� �����ϰ� ���ǽ��� �˻� */
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

	if (num1 == 1)         // num1�� 1�̸�
		goto ONE;          // ���̺� ONE���� ��� �̵�
	else if (num1 == 2)    // num1�� 2�̸�
		goto TWO;          // ���̺� TWO�� ��� �̵�
	else                   // 1�� �ƴϰ� 2�� �ƴϸ�
		goto EXIT;         // ���̺� EXIT�� ��� �̵�

ONE:    // ���̺� ONE
	printf("1�Դϴ�.\n");
	goto EXIT; // ���̺� EXIT�� ��� �̵�

TWO:    // ���̺� TWO
	printf("2�Դϴ�.\n");
	goto EXIT; // ���̺� EXIT�� ��� �̵�

EXIT:    // ���̺� EXIT
	return;
}