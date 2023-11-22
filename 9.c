#include <locale.h>
#include <stdio.h>

//ex 1
#define ROW 30
#define COL 30
void main()
{
	int row, col;
	for (col = 25; col != COL; col++) {
		for (row = col; row != ROW; row++)
		printf("%5d", col/5);
		printf("\n");
	}
	system("pause");
}

//ex 3
void main()
{
	setlocale(LC_ALL, "RUS");
	double G;
	char sym;
	puts("Прямоугольный треугольник");
	printf("Введите символ из которого будет строиться фигура: \n");
	scanf("%c", &sym);
	printf("Введите гипотенузу: \n");
	scanf("%lf", &G);
	printf("Заполненный прямоугольный треугольник:\n");
	int a = 0;
	for (int i = G; i > 0; i--)
	{
		printf("\n");
		for (int i = 0; i <= a; i++)
		{
			putchar(sym);
		}
		a++;
	}
	printf("\n");
	system("pause");
}
