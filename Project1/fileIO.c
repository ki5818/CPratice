///* a.txt �� ������ ����Ѵ�. fopen() */
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

/* fgets() a.txt ���� ������ �Է� �޴´�. */
void testFgets() {
	FILE* fp;
	char buf[20]; // ������ �Է¹��� ��
	
	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("READ ERROR !! \n");
		return;
	}

	fgets(buf, 20, fp); // fgets(�Է¹��� ��, ����Ʈ ��, ��Ʈ����)
	printf("�Է¹޴� ���� : %s \n", buf);
	fclose(fp);
}

///* fseek �Լ� ���� */
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
	printf("�Է� ���� ������ : %s \n", data);
	c = fgetc(fp);
	printf("�� ������ �Է� ���� ���� : %c \n", c);
	fseek(fp, -1, SEEK_CUR);
	c = fgetc(fp);
	printf("�׷��ٸ� ���� ���ڰ�? : %c \n", c);
	fclose(fp);
}

