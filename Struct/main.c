#define _CRT_SECURE_NO_WARNINGS
/* 구조체의 도입*/
#include <stdio.h>
struct Books {
	/* 책 이름 */
	char name[30];
	/* 저자 이름 */
	char auth[30];
	/* 출판사 이름 */
	char publ[30];
	/* 빌려 졌나요? */
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

struct Person {    // 구조체 정의
	char name[20];        // 구조체 멤버 1
	int age;              // 구조체 멤버 2
	char address[100];    // 구조체 멤버 3
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
	printf("st 의 a 멤버 : %d \n", st.a);
	printf("st 의 b 멤버 : %d \n", st.b);

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
	printf("Engine temp: %d℃\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);
}


int main() {
	struct Person* p1 = malloc(sizeof(struct Person));    // 구조체 포인터 선언, 메모리 할당

	// 화살표 연산자로 구조체 멤버에 접근하여 값 출력
	printf("이름: %s\n", p1->name);       // 홍길동
	printf("나이: %d\n", p1->age);        // 30
	printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동

	free(p1);    // 동적 메모리 해제









	struct Books book_list[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("책 %d 정보 입력 : ", i);
		scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}
	for (i = 0; i < 3; i++) {
		printf("------------------------------- \n");
		printf("책 %s 의 정보\n", book_list[i].name);
		printf("저자 : %s \n", book_list[i].auth);
		printf("출판사 : %s \n", book_list[i].publ);
		if (book_list[i].borrowed == 0) {
			printf("안 빌려짐\n");
		}
		else {
			printf("빌려짐 \n");
		}
	}
}