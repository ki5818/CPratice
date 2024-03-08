///* a.txt 에 내용을 기록한다. fopen() */
#include <stdio.h>
#include "cpractice.h"
void testFopen() {
	FILE* fp;
	fopen_s(&fp, "a.txt", "w"); //fp = fopen("a.txt", "w")
	if (fp == NULL) {
		printf("Write Error!!\n");
		return;
	}
	int end = SEEK_SET;
	fputs("Hello World!!! \n", fp);
	fclose(fp);
}

/* fgets() a.txt 에서 내용을 입력 받는다. */
void testFgets() {
	FILE* fp;
	char buf[20]; // 내용을 입력받을 곳
	
	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("READ ERROR !! \n");
		return;
	}

	fgets(buf, 20, fp); // fgets(입력받을 곳, 바이트 수, 스트림명)
	printf("입력받는 내용 : %s \n", buf);
	fclose(fp);
}

///* fseek 함수 예제 */
void testFseek() {
	FILE* fp;
	fp = fopen("some_data.txt", "r");
	char data[10];
	char c;
	if (fp == NULL) {
		printf("file open error ! \n");
		return;
	}
	fgets(data, 5, fp);
	printf("입력 받은 데이터 : %s \n", data);
	c = fgetc(fp);
	printf("그 다음에 입력 받은 문자 : %c \n", c);
	fseek(fp, -1, SEEK_CUR);
	c = fgetc(fp);
	printf("그렇다면 무슨 문자가? : %c \n", c);
	fclose(fp);
}

