#include <stdio.h>
#include "cpractice.h"
void mulitiple() {
	double i, j;
	printf("나누고 싶은 두 정수를 입력하세요 : ");
	scanf("%lf %lf", &i, &j);
	if (j == 0) {
		printf("0 으로 나눌 수 없습니다. \n");
		return ;
	}
	printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);
}

void testSwitch(int *p) {
	printf("%d\n", *p);
	switch (*p) {
	case 1:
		printf("아이 맛있어 \n");
	case 2:
		printf("아이 시원해 \n");
	case 3:
		printf("zzz \n");
	defalut:
		printf("error!");
		break;
	}

}