#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int testFunction() {

}

void factorize(int n) {
	int i = 2;
	while (n > 1) {
		if (n % i == 0) {
			printf("%d ", i);
			n = n / i;
		}
		else {
			i++;
		}
	}
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void functionArray(int *parr) {
	int i;
	for (i = 0; i < 3; i++) {
		parr[i]++;
	}
}

void dimentionalArray(int arr[][2]){
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			arr[i][j]++;
		}
	}

}

int pswap(int** ppa, int** ppb) {
	int* temp = *ppa;
	*ppa = *ppb;
	*ppb = temp;
	return 0;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
	return 0;
}

void funtion_pointer() {
	int a, b;
	int (*pmax)(int, int);
	pmax = max;
	scanf("%d %d", &a, &b);
	printf("max(a,b) : %d \n", max(a, b));// 15
	printf("pmax(a,b) : %d \n", pmax(a, b)); // 15
	printf("pmax(a,b) : %d \n", pmax); 
	printf("pmax(a,b) : %d \n", max);

}



//void printPswap() {
// 
//int arr[2][2];
//int a = 1, b = 2;
//int* pa = &a, * pb = &b;
//int** ppa = &pa, ** ppb = &pb;
//printf("\n");
//printf("ppa �� ����Ű�� ������ �ּҰ� : %p \n", ppa);
//printf("ppb �� ����Ű�� ������ �ּҰ� : %p \n", ppb);
//
//printf("ppa �� ����Ű�� �� : %p \n", *ppa);
//printf("ppb �� ����Ű�� �� : %p \n", *ppb);
//
//printf("ppa �� ����Ű�� �����Ͱ� ����Ű�� �� : %d \n", **ppa);
//printf("ppb �� ����Ű�� �����Ͱ� ����Ű�� �� : %d \n", **ppb);
//
//pswap(ppa, ppb);
//
//printf("ppa �� ����Ű�� ������ �ּҰ� : %p \n", ppa);
//printf("ppb �� ����Ű�� ������ �ּҰ� : %p \n", ppb);
//
//printf("ppa �� ����Ű�� �� : %p \n", *ppa);
//printf("ppb �� ����Ű�� �� : %p \n", *ppb);
//
//printf("ppa �� ����Ű�� �����Ͱ� ����Ű�� �� : %d \n", **ppa);
//printf("ppb �� ����Ű�� �����Ͱ� ����Ű�� �� : %d \n", **ppb);
//}


int main() {
	funtion_pointer();

	return 0;
}