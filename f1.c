#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

float function(float x)
{
	return x * log(pow(x, 4)) - tan(sqrt(1 + pow(x, 2)));
}

int main()
{
	float x;
	setlocale(LC_ALL, "RUS");
	printf("Программа для вычесления значения функции по заданному значению 'x'\n");
	printf("Введите значение 'x' для функции: ");
	scanf("%f", &x);
	printf("Вы ввели x = %.2f\n", x);
	printf("Ответ: %.2f\n", function(x));
	system("pause");
}
