#include <stdio.h>
#include "cpractice.h"
void testGetchar() {
	char ch = 0;

	ch = getchar();
	putchar(ch);
	putchar('z');
}