#include <stdio.h>
#include "cpractice.h"
void mulitiple() {
	double i, j;
	printf("������ ���� �� ������ �Է��ϼ��� : ");
	scanf("%lf %lf", &i, &j);
	if (j == 0) {
		printf("0 ���� ���� �� �����ϴ�. \n");
		return ;
	}
	printf("%f �� %f �� ���� ����� : %f \n", i, j, i / j);
}

void testSwitch(int *p) {
	printf("%d\n", *p);
	switch (*p) {
	case 1:
		printf("���� ���־� \n");
	case 2:
		printf("���� �ÿ��� \n");
	case 3:
		printf("zzz \n");
	defalut:
		printf("error!");
		break;
	}

}