#include <stdio.h>
#define MAX 10
void average() {
	// const int max=10; const int�� ��Ÿ�ӽ� ���� �����ȴ�, C�� �迭�� ũ��� ������ �ÿ� ���������ϱ� ������ ����
	int total;
	printf("��ü �л��� : ");
	scanf("%d", &total);
	int arr[MAX];
	int i, ave = 0;
	for (i = 0; i < total; i++) {
		printf("%d ��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}
	ave = ave / total;
	printf("��ü �л��� ����� : %d \n", ave);
	for (i = 0; i < total; i++) {
		printf("�л� %d : ", i + 1);
		if (arr[i] >= ave)
			printf("�հ� \n");
		else
			printf("���հ� \n");
	}
}

void dimensionalArray() {
	int d_arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("�� ���� ���� : %d \n", sizeof(d_arr[0]) / sizeof(d_arr[0][0]));
	printf("�� ���� ���� : %d \n", sizeof(d_arr) / sizeof(d_arr[0]));
}

void test() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int** parr;
	parr = arr;
	printf("arr[1][1] : %d \n", arr[1][1]);
	printf("arr : %p \n", arr);
	printf("parr : %p \n", parr);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int d_arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("Array 3 ��° ���� : %d \n ", arr[2]);
	
	for (int i = 0; i < 3; i++) {
		printf("%d ��° �л��� ���� ���� : %d, ���� ���� : %d \n", i + 1, d_arr[i][0], d_arr[i][1], d_arr[i][1]);
	}
	test();
	dimensionalArray();
	return 0;
}