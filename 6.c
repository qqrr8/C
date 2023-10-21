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

//ex 3
int main()
{
	setlocale(LC_ALL, "RUS");

	int year;
	puts("Введите свой год рождения:");
	scanf("%d", &year);
	printf("Ваш год рождения: %d\n", year);
	int age = 2023 - year;
	printf("Ваш возраст: %d\n", age);

	system("pause");
}
