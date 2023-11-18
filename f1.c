#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Программа для вычесления значения функции по заданному значению x\n");
	float x;
	printf("Введите значение x для функции: ");
	scanf("%f", &x);
	float f = x * log(pow(x, 4)) - tan(sqrt(1 + pow(x, 2)));
	printf("Вы ввели x = %.2f\n", x);
	printf("Ответ: %.2f\n", f);
	system("pause");
}
