#include <stdio.h>
#define MAX 10
void average() {
	// const int max=10; const int는 런타임시 값이 결정된다, C의 배열의 크기는 컴파일 시에 정해져야하기 때문에 오류
	int total;
	printf("전체 학생수 : ");
	scanf("%d", &total);
	int arr[MAX];
	int i, ave = 0;
	for (i = 0; i < total; i++) {
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}
	ave = ave / total;
	printf("전체 학생의 평균은 : %d \n", ave);
	for (i = 0; i < total; i++) {
		printf("학생 %d : ", i + 1);
		if (arr[i] >= ave)
			printf("합격 \n");
		else
			printf("불합격 \n");
	}
}

void dimensionalArray() {
	int d_arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("총 열의 개수 : %d \n", sizeof(d_arr[0]) / sizeof(d_arr[0][0]));
	printf("총 행의 개수 : %d \n", sizeof(d_arr) / sizeof(d_arr[0]));
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
	printf("Array 3 번째 원소 : %d \n ", arr[2]);
	
	for (int i = 0; i < 3; i++) {
		printf("%d 번째 학생의 국어 점수 : %d, 수학 점수 : %d \n", i + 1, d_arr[i][0], d_arr[i][1], d_arr[i][1]);
	}
	test();
	dimensionalArray();
	return 0;
}