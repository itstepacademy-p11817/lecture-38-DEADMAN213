#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
#include <locale.h>

int sqrn(uint8_t a, uint8_t n);
bool isLucky(uint16_t a);

#define MENU 9
#define MIN(A, B) ((A) < (B)) ? (A) : (B)
#define MAX(A, B) ((A) > (B)) ? (A) : (B)
#define SQR(A) (A) * (A)
#define SQRN(A, N) sqrn((A), (N))
#define ISEVEN(A) ((A) % 2 == 0) ? true : false
#define ISNEVEN(A) ((A) % 2 != 0)  ? true : false
#define ISLUCKY(A) isLucky((A))

int sqrn(uint8_t a, uint8_t n) {
	int result = 1;
	for (uint8_t i = 0; i < n; i++) {
		result *= a;
	}

	return result;
}

bool isLucky(uint16_t a) {
	uint8_t sum = 0;
	for (uint8_t i = 0; i < 4; i++) {
		if (a == 0) {
			return false;
		}
		sum += a % 10;
		a /= 10;
	}

	if (sum % 2 == 0 && a == 0) {
		return true;
	}

	return false;
}

enum {
	MIN = 1,
	MAX,
	SQR,
	SQRN,
	ISEVEN,
	ISNEVEN,
	ISLUCKY,
	EXIT
};

const char* menuItems[] = {
	"Меню:",
	"Меньшее из двух чисел.",
	"Большее из двух чисел.",
	"Квадрат числа.",
	"Число в степени.",
	"Проверка на четность.",
	"Проверка на нечетность.",
	"Проверка числа на удачность.",
	"Выход."
};

uint8_t menu() {
	system("cls");

	uint8_t ch = 0;

	printf("%s\n", menuItems[0]);
	for (uint8_t i = 1; i < MENU; i++) {
		printf("%hhu - %s\n", i, menuItems[i]);
	}
	printf("Ваш выбор: ");
	scanf("%hhu", &ch);

	return ch;
}

void pass() {
	while (getchar() != '\n');
}

int main() {
	setlocale(LC_ALL, "Russian");

	uint8_t ch = 0;

	while ((ch = menu()) != EXIT) {
		switch (ch) {
		case MIN: {
			uint8_t a = 0;
			uint8_t b = 0;

			printf("Введите первое число: ");
			scanf("%hhu", &a);

			printf("Введите второе число: ");
			scanf("%hhu", &b);

			printf("Минимум из двух чисел: %hhu.\n", MIN(a, b));
		}
			break;

		case MAX: {
			uint8_t a = 0;
			uint8_t b = 0;

			printf("Введите первое число: ");
			scanf("%hhu", &a);

			printf("Введите второе число: ");
			scanf("%hhu", &b);

			printf("Максимум из двух чисел: %hhu.\n", MAX(a, b));
		}
			break;

		case SQR: {
			uint8_t a = 0;
			printf("Введите число: ");
			scanf("%hhu", &a);

			printf("Квадрат %hhu: %hhu.\n", a, SQR(a));
		}
			break;

		case SQRN: {
			uint8_t a = 0;
			uint8_t n = 0;

			printf("Введите число: ");
			scanf("%hhu", &a);

			printf("Введите степень: ");
			scanf("%hhu", &n);

			printf("%hhu в степени %hhu: %hhu.\n", a, n, SQRN(a, n));
		}
			break;

		case ISEVEN: {
			uint8_t a = 0;
			printf("Введите число: ");
			scanf("%hhu", &a);

			if (ISEVEN(a)) {
				printf("%hhu четное.\n", a);
			}
			else {
				printf("%hhu нечетное.\n", a);
			}
		}
			break;

		case ISNEVEN: {
			uint8_t a = 0;
			printf("Введите число: ");
			scanf("%hhu", &a);

			if (ISNEVEN(a)) {
				printf("%hhu нечетное.\n", a);
			}
			else {
				printf("%hhu четное.\n", a);
			}
		}
			break;

		case ISLUCKY: {
			uint16_t a = 0;
			printf("Введите число: ");
			scanf("%hu", &a);

			if (ISLUCKY(a)) {
				printf("%hu счастливое.\n", a);
			}
			else {
				printf("%hu несчастливое.\n", a);
			}
		}
			break;

		default:
			printf("Неверный ввод.\n");
			pass();
			break;
		}
		printf("Нажмите любую клавишу.\n");
		_getch();
	}

	return 0;
}