#include "function.h"

//integer---------------------------------------------------------------------------------------------------------
void massiveInitInteger(int* mas) {
	for (uint8_t i = 0; i < SIZE; i++) {
		mas[i] = rand() % 100;
	}
}

void massivePrintInteger(int* mas) {
	for (uint8_t i = 0; i < SIZE; i++) {
		printf("%3i", mas[i]);
	}
	printf("\n");
}

int massiveMinInteger(int* mas) {
	int min = mas[0];

	for (uint8_t i = 1; i < SIZE; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}

	printf("Минимальный элемент: %i.\n", min);

	return min;
}

int massiveMaxInteger(int* mas) {
	int max = mas[0];

	for (uint8_t i = 1; i < SIZE; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
	}

	printf("Максимальный элемент: %i.\n", max);

	return max;
}

void massiveSortInteger(int* mas) {
	for (uint8_t i = 0; i < SIZE - 1; i++) {
		for (uint8_t j = i + 1; j < SIZE; j++) {
			if (mas[j] < mas[i]) {
				int box = mas[j];
				mas[j] = mas[i];
				mas[i] = box;
			}
		}
	}
}

bool massiveChangeInteger(int* mas, uint8_t ind, int val) {
	if (ind > SIZE - 1) {
		return false;
	}

	mas[ind] = val;

	return true;
}
//----------------------------------------------------------------------------------------------------------------

//char------------------------------------------------------------------------------------------------------------
void massiveInitChar(char* mas) {
	for (uint8_t i = 0; i < SIZE; i++) {
		mas[i] = rand() % 256;
	}
}

void massivePrintChar(char* mas) {
	for (uint8_t i = 0; i < SIZE; i++) {
		printf("%3c", mas[i]);
	}
	printf("\n");
}

char massiveMinChar(char* mas) {
	char min = mas[0];

	for (uint8_t i = 1; i < SIZE; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}

	printf("Минимальный элемент: %c.\n", min);

	return min;
}

char massiveMaxChar(char* mas) {
	char max = mas[0];

	for (uint8_t i = 1; i < SIZE; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
	}

	printf("Максимальный элемент: %c.\n", max);

	return max;
}

void massiveSortChar(char* mas) {
	for (uint8_t i = 0; i < SIZE - 1; i++) {
		for (uint8_t j = i + 1; j < SIZE; j++) {
			if (mas[j] < mas[i]) {
				char box = mas[j];
				mas[j] = mas[i];
				mas[i] = box;
			}
		}
	}
}

bool massiveChangeChar(char* mas, uint8_t ind, char val) {
	if (ind > SIZE - 1) {
		return false;
	}

	mas[ind] = val;

	return true;
}
//----------------------------------------------------------------------------------------------------------------

//double----------------------------------------------------------------------------------------------------------
void massiveInitDouble(double* mas) {
	for (uint8_t i = 0; i < SIZE; i++) {
		mas[i] = (rand() % 100) + (rand() % 10) / 10.;
	}
}

void massivePrintDouble(double* mas) {
	for (uint8_t i = 0; i < SIZE; i++) {
		printf("%.1f ", mas[i]);
	}
	printf("\n");
}

double massiveMinDouble(double* mas) {
	double min = mas[0];

	for (uint8_t i = 1; i < SIZE; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}

	printf("Минимальный элемент: %.1f.\n", min);

	return min;
}

double massiveMaxDouble(double* mas) {
	double max = mas[0];

	for (uint8_t i = 1; i < SIZE; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
	}

	printf("Максимальный элемент: %.1f.\n", max);

	return max;
}

void massiveSortDouble(double* mas) {
	for (uint8_t i = 0; i < SIZE - 1; i++) {
		for (uint8_t j = i + 1; j < SIZE; j++) {
			if (mas[j] < mas[i]) {
				double box = mas[j];
				mas[j] = mas[i];
				mas[i] = box;
			}
		}
	}
}

bool massiveChangeDouble(double* mas, uint8_t ind, double val) {
	if (ind > SIZE - 1) {
		return false;
	}

	mas[ind] = val;

	return true;
}
//----------------------------------------------------------------------------------------------------------------