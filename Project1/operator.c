/* ��Ʈ ������ */
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
	/* 4bytes �̱� ���� */ 
	printf("%x \n", ~a); // ffffff50
	printf("%x \n", a << 2); // 2bc
	printf("%x \n", a >> 8); // 0
	printf("%x \n", b >> 32); // b5
	/* int���� 4 bytes �̱� ������ 32bit �̵��� ��� �����÷� �߻� */
	/* ���� �ϸ� ����ȴ�. */
	b = (b << 31);
	printf("%x \n", b << 31); // B5
}