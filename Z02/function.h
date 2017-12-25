#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define SIZE 10

//integer
void massiveInitInteger(int* mas);
void massivePrintInteger(int* mas);
int massiveMinInteger(int* mas);
int massiveMaxInteger(int* mas);
void massiveSortInteger(int* mas);
bool massiveChangeInteger(int* mas, uint8_t ind, int val);

//char
void massiveInitChar(char* mas);
void massivePrintChar(char* mas);
char massiveMinChar(char* mas);
char massiveMaxChar(char* mas);
void massiveSortChar(char* mas);
bool massiveChangeChar(char* mas, uint8_t ind, char val);

//double
void massiveInitDouble(double* mas);
void massivePrintDouble(double* mas);
double massiveMinDouble(double* mas);
double massiveMaxDouble(double* mas);
void massiveSortDouble(double* mas);
bool massiveChangeDouble(double* mas, uint8_t ind, double val);

#if defined(INTEGER)
	#define Init(mas) massiveInitInteger((mas))
	#define Print(mas) massivePrintInteger((mas))
	#define Min(mas) massiveMinInteger((mas))
	#define Max(mas) massiveMaxInteger((mas))
	#define Sort(mas) massiveSortInteger((mas))
	#define Change(mas, ind, val) massiveChangeInteger((mas), (ind), (val))
#elif defined(CHAR)
	#define Init(mas) massiveInitChar((mas))
	#define Print(mas) massivePrintChar((mas))
	#define Min(mas) massiveMinChar((mas))
	#define Max(mas) massiveMaxChar((mas))
	#define Sort(mas) massiveSortChar((mas))
	#define Change(mas, ind, val) massiveChangeChar((mas), (ind), (val))
#elif defined(DOUBLE)
	#define Init(mas) massiveInitDouble((mas))
	#define Print(mas) massivePrintDouble((mas))
	#define Min(mas) massiveMinDouble((mas))
	#define Max(mas) massiveMaxDouble((mas))
	#define Sort(mas) massiveSortDouble((mas))
	#define Change(mas, ind, val) massiveChangeDouble((mas), (ind), (val))
#endif