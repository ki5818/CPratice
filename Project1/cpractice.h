#ifndef C_PRATICE_H__
#define C_PRATICE_H__
#include <stdio.h> // standard I/O 표준입출력 라이브러리
/* 보안함수 관련 전처리 */
//#define _CRT_SECURE_NO_WARNINGS

/* variable.c */
void testVar();

/* operator.c */
void testBit();

/* input.c */
double getFahrenheit();
void testScanf();

void testSwitch(int* p);

/* loop() */
void quiz();
void testContinue();
void testDoWhile();
void testGoto(int* p);

/* standardIO.c */
void testGetchar();

/* fileIO.c */
void testFopen();
void testFgets();
void testFseek();

#endif // !C_PRATICE_H
