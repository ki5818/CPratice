/*
* %d, %i int값을 부호있는 10진수로 출력
* %u int값을 부호없는 10진수로 출력
* %X int값을 부호없는 16진수로 출력  10~15은  'A'~'F'로 표시
* %x int값을 부호없는 16진수로 출력  10~15은  'a'~'f'로 표시
* %o int값을 부호없는 8진수로 출력
* %p 포인터값을 16진수로 출력
* %s 문자열 출력
* %c, %C int값을 문자로 출력
* %f double값을 소수로 출력(예：12.566371)
* %e double값을 지수로 출력(예：1.256637e+001)
* %E e와 같음 'e'가 'E'로 표시(예：1.256637E+001)
* %g 숫자값의 크기에 따라 f나 e로 출력
	 숫자값의 절대치가 너무 커서 precision의 자리수를 넘는 경우
	 숫자값의 절대값이 0.0001보다 작은 경우 e형식
* %G 9와 같음 'e'가 'E'로 표시
*/
#include <stdio.h>
#include "cpractice.h"
void testVar() {
	int a;
	a = 127;

	float f = 3.141592f; // double 형식이 아닌 float임을 확실히 함
	double b = 3.141592;
	int c = 123;

	printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, a);
	printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, a);
	printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, a);


	printf("f : %.2f \n", f); // 소수점이하 2째자리까지 출력
	printf("c : %5d \n", c); // 숫자의 자리수를 되도록 5자리로 맞춰라
	printf("b : %6.3f \n", b);
}