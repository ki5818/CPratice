#define _CRT_SECURE_NO_WARNINGS
/* ����ü�� ����*/
#include <stdio.h>
struct Books {
	/* å �̸� */
	char name[30];
	/* ���� �̸� */
	char auth[30];
	/* ���ǻ� �̸� */
	char publ[30];
	/* ���� ������? */
	int borrowed;
};

struct Point2D {
	int x;
	int y;
} typedef Point2D;

struct Dashboard {
	int speed;
	char fuel;
	float mileage;
	int engineTemp;
	int rpm;
};

struct Person {    // ����ü ����
	char name[20];        // ����ü ��� 1
	int age;              // ����ü ��� 2
	char address[100];    // ����ü ��� 3
};

struct test {
	int a, b;
};

void structPointer() {
	struct test st;
	struct test *ptr;
	ptr = &st;
	ptr->a = 1;
	ptr->b = 2;
	printf("st �� a ��� : %d \n", st.a);
	printf("st �� b ��� : %d \n", st.b);

}

void coordinate() {
	Point2D p1;
	p1.x = 10;
	p1.y = 20;

	printf("%d %d", p1.x, p1.y);
}

void fuctionCar() {
	struct Dashboard d1;
	d1.speed = 80;
	d1.fuel = 'F';
	d1.mileage = 5821.442871;
	d1.engineTemp = 200;
	d1.rpm = 1830;

	printf("Speed: %dkm/h\n", d1.speed);
	printf("Fuel: %c\n", d1.fuel);
	printf("Mileage: %fkm\n", d1.mileage);
	printf("Engine temp: %d��\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);
}


int main() {
	struct Person* p1 = malloc(sizeof(struct Person));    // ����ü ������ ����, �޸� �Ҵ�

	// ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� ���
	printf("�̸�: %s\n", p1->name);       // ȫ�浿
	printf("����: %d\n", p1->age);        // 30
	printf("�ּ�: %s\n", p1->address);    // ����� ��걸 �ѳ���

	free(p1);    // ���� �޸� ����









	struct Books book_list[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("å %d ���� �Է� : ", i);
		scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}
	for (i = 0; i < 3; i++) {
		printf("------------------------------- \n");
		printf("å %s �� ����\n", book_list[i].name);
		printf("���� : %s \n", book_list[i].auth);
		printf("���ǻ� : %s \n", book_list[i].publ);
		if (book_list[i].borrowed == 0) {
			printf("�� ������\n");
		}
		else {
			printf("������ \n");
		}
	}
}