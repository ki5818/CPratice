/* 비트 연산자 */
/**
* & AND
* | OR
* ^ XOR
* <<, >> SHIFT
* ~ NOT
* */
#include <stdio.h>
#include "cpractice.h"
void testBit() {
	int a = 0xAF; // 10101111
	int b = 0xB5; // 10110101
	int c = 0x0;

	printf("%x \n", a & b); // a5
	printf("%x \n", a | b); // bf
	printf("%x \n", a ^ b); // 1a
	/* 4bytes 이기 때문 */ 
	printf("%x \n", ~a); // ffffff50
	printf("%x \n", a << 2); // 2bc
	printf("%x \n", a >> 8); // 0
	printf("%x \n", b >> 32); // b5
	/* int형은 4 bytes 이기 때문에 32bit 이동시 산술 오버플로 발생 */
	/* 따로 하면 실행된다. */
	b = (b << 31);
	printf("%x \n", b << 31); // B5
}