#include <stdio.h>
#include "cpractice.h"
double getFahrenheit() {
	double celsius=0; // ���� �µ�
	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� : ");

	scanf("%lf", &celsius); // ���� �µ��� �Է� �޴´�.

	printf("���� %f ���� ȭ���� %f �� �Դϴ� \n", celsius, 9 * celsius / 5 + 32);
	return celsius;
}

void testScanf() {
	char ch; // ����
	short sh; // ����
	int i;
	long lo;
	float fl; // �Ǽ�
	double du;
	printf("char �� ���� �Է� : ");
	scanf("%c", &ch);
	printf("short �� ���� �Է� : ");
	scanf("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf("%ld", &lo);
	printf("float �� ���� �Է� : ");
	scanf("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf("%lf", &du);
	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
}