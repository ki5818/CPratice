#include <stdio.h>

void pArray() {
	int arr[3] = { 1, 2, 3 };
	int(*parr)[3] = &arr;
	printf("arr : %p \n", arr);
	printf("parr : %p \n", parr);
}

/* 포인터 이용하기 */
void testPointer() {
	int arr[10] = { 100, 98, 97, 95, 89, 76, 92, 96, 100, 99 };
	int* parr = arr; //parr에 arr의 첫번째 원소 주소
	int sum = 0;
	while (parr - arr <(sizeof(arr) / sizeof(int))) {
		sum += (*parr);
		parr++;
		printf("%p\n",parr);
	}
	printf("내 시험 점수 평균 : %d \n", sum / 10);
	return 0;
}


int main() {
	int a = 2;
	int* p = &a;
	int** pp = &p;
	const int* const pa = &a;

	printf("%p \n", &a);
	printf("%d \n", *p);
	printf("%p \n", *pp);
	printf("%d \n", **pp);
	printf("%p \n", pp);

	pArray();

	return 0;
}