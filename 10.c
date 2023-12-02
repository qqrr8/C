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
void main()
{
	setlocale(LC_ALL, "RUS");
	float G;
	char sym = '*';
	int n;
	printf("Выберите фигуру:\n1 - квадрат\n2 - треугольник\n");
	scanf("%d", &n);
	if (n <= 1)
	{
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
	else
	{
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

	int v;
	printf("Расчитать площадь - 1\n");
	printf("Вывести определение фигуры - 2\n");
	printf("Нарисовать фигуру - 3\n");
	scanf("%d", &v);
	if (v <= 1)
	{
		float tr = (G * G) / 2;
		if (n <= 1)
			printf("Площадь фигуры равна:%d\n", G * G);
		else
			printf("Площадь фигуры равна:%.1f\n", tr);
	}
	if (v = 2)
	{
		if (n <= 1)
			printf("Квадрат\n");
		else
			printf("Треугольник\n");
	}
	if (v >= 3)
	{
		
	}
	system("pause");
}


//ex 3 not ready
void main()
{
	setlocale(LC_ALL, "RUS");
	float G;
	char sym = '*';
	int n;
	printf("Выберите фигуру:\n1 - квадрат\n2 - треугольник\n");
	scanf("%d", &n);
	if (n <= 1)
	{
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
	else
	{
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

	int v;
	printf("Расчитать площадь - 1\n");
	printf("Вывести определение фигуры - 2\n");
	printf("Нарисовать фигуру - 3\n");
	scanf("%d", &v);
	if (v <= 1)
	{
		float tr = (G * G) / 2;
		if (n <= 1)
			printf("Площадь фигуры равна:%d\n", G * G);
		else
			printf("Площадь фигуры равна:%.1f\n", tr);
	}
	if (v = 2)
	{
		if (n <= 1)
			printf("Квадрат\n");
		else
			printf("Треугольник\n");
	}
	if (v >= 3)
	{
		
	}
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

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Выберите фигуру:\n1 - квадрат\n2 - треугольник\n");
	int n;
	scanf("%d", &n);
	if (n <= 1)
	{
		draw_square();
	}
	else
	{
		draw_triangle();
	}

	float side_s = G;
}
