#define _CRT_SECURE_NO_WARNINGS
#define DOUBLE

#include "function.h"

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	#if defined(INTEGER)
		int* mas = calloc(SIZE, sizeof(int));
	#elif defined(CHAR)
		char* mas = calloc(SIZE, sizeof(char));
	#elif defined(DOUBLE)
		double* mas = calloc(SIZE, sizeof(double));
	#endif

	Init(mas);

	printf("Исходный массив: ");
	Print(mas);

	Min(mas);
	Max(mas);

	Sort(mas);
	printf("Массив после сортировки: ");
	Print(mas);

	Change(mas, 4, 0);
	printf("Массив после изменения пятого элемента: ");
	Print(mas);

	return 0;
}