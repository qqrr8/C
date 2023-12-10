#include <locale.h>
#include <stdio.h>

//ex 1
#define _USE_MATH_DEFINES 
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	double x;
	printf("Введите X: \n");
	scanf("%lf", &x);
	double fb = x * exp(sin(pow(x,2)));
	double fa;
	if (x <= 3)
	{
		fa = pow(x, 2) - 3 * x + 9;
	}
	else
	{
		fa = 1/(pow(x,3) + 3);
	}
	printf("fa(x)=%lf, fb(x)=%lf\n", fa, fb);
	printf("Произведение: %lf\n", fa * fb);
	printf("Разность квадратов: %lf\n", (fa + fb) * (fa - fb));
	printf("Удвоенная сумма: %lf\n", (fb + fa * 2));
	system("pause");
}

//ex 3
void draw_square()
{
	setlocale(LC_ALL, "RUS");
	char sym = '*';
	float G;
	printf("Введите длину стороны квадрата: ");
	scanf("%f", &G);
	for (int i = 0; i < G; i++)
	{
		for (int j = 0; j < G; j++)
		{
			putchar(sym);
		}
		printf("\n");
	}
}

void draw_triangle()
{
	setlocale(LC_ALL, "RUS");
	char sym = '*';
	float G;
	printf("Введите длину стороны треугольника: ");
	scanf("%f", &G);
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
}

float area_square(float side_s)
{
	return side_s * side_s;
}

float area_triangle(float side_t)
{
	return side_t * side_t;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int choosef;
	int choosed;
	float area;
	do
	{
		printf("Выберите фигуру:\n1 - квадрат\n2 - треугольник\n");
		scanf("%d", &choosef) ;
    } 
		while ((choosef < 1) || (choosef > 2));
		if (choosef == 1)
		{
			do
			{
				printf("Выберите действие:\n1 - рассчитать площадь;\n2 - вывести определение фигуры;\n3 - нарисовать фигуру\n");
				scanf("%d", &choosed);
			} 
			while ((choosed < 1) || (choosed > 3));
			if (choosed == 1)
			{
				//area
			}
			if (choosed == 2)
			{
				printf("Это квадрат\n");
			}
			if (choosed == 3)
			{
				draw_square();
			}
		}
		if (choosef == 2)
		{
			do 
			{
				printf("Выберите действие:\n1 - рассчитать площадь;\n2 - вывести определение фигуры;\n3 - нарисовать фигуру\n");
				scanf("%d", &choosed);
			}
			while ((choosed < 1) || (choosed > 3));
			if (choosed == 1)
			{
				//area
			}
			if (choosed == 2)
			{
				printf("Это треугольник\n");
			}
			if (choosed == 3)
			{
				draw_triangle();
			}
		}
		system("pause");
}
