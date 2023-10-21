#include <locale.h>
#include <stdio.h>


//ex 1
int main()
{
	setlocale(LC_ALL, "RUS");

	int year;
	puts("Введите год:");
	scanf("%d", &year);
	printf("Ваш год:%d\n", year);
	int rem4 = year % 4;
	int rem100 = year % 100;
	int rem400 = year % 400;
	if (rem4 == 0 && rem100 != 0 || rem400 == 0)
		printf("Год %d високосный\n", year);
	else
		printf("Год %d не високосный\n", year);
	system("pause");
}


//ex2

int main()
{
	setlocale(LC_ALL, "RUS");
	float F, x;
	puts("Введите x");
	scanf("%f", &x);
	printf("x = %.6f\n", x);
	if (x <= 1)
	{
		printf("F = %.0f\n", F = 0);
	}
	else
	{
		printf("F = %.6f\n", F = 1 / (x + 6));
	}
	system("pause");
}


//ex 3
int main()
{
	setlocale(LC_ALL, "RUS");

	int year;
	puts("Введите свой год рождения:");
	scanf("%d", &year);
	printf("Ваш год рождения: %d\n", year);
	int age = 2023 - year;
	if (age%10==1)
	{
		printf("Ваш возраст: %d год\n", age);
	}
	else
	if 	(age%10==2 || age % 10 == 3 || age % 10 == 4)
	{
		printf("Ваш возраст: %d года\n", age);
	}
	else
	{
		printf("Ваш возраст: %d лет\n", age);
	}
	system("pause");
}
