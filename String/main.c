#include <stdio.h>
void testScanf() {
	int num,i;
	char c,str[30];
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c); // ������ ���ڷ� �޾Ƽ� �Ѿ

	//scanf("%[^\n]s", s1); ������� �Է¹޴� scanf

	scanf("%d", &i);

	scanf("%s", str);
	printf("%d\n", i);
	printf("str : %s", str);


}

void string()
{
	char s1[] = "Beethoven\n9th\nSymphony";
	//scanf("%[^\n]s", s1);
	printf("%s\n", s1);
	printf("%c\n", s1[10]);
}

void printString() {
	const char str[] = "Hello World!";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));
	printf("%c\n", str[11]);
}

int main() {
	//printString();
	//testScanf();
	string();
	return 0;
}