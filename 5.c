#include <locale.h>
#include <stdio.h>

#define _USE_MATH_DEFINES 
#include <math.h>


//ex 0

int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	puts("Введите x:");
	scanf("%f", &x);
	puts("Введите y:");
	scanf("%f", &y);
	printf("ответ: % .3f\n", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));

	system("pause");
}


//ex 1
#define M_PI 3.14159265358979323846

int main()
{
	setlocale(LC_ALL, "RUS");
	
	float gr;
	puts("Введите значение угла в грудусах:");
	scanf("%f", &gr);
	double res = sin(gr * M_PI / 180);
	printf("sin %.0f градусов = %.6lf\n", gr, res);

	system("pause");

}


//ex 2,3

#define t -6

int main()
{
	setlocale(LC_ALL, "RUS");
	
	float x;
	puts("Введите значение x:");
	scanf("%f", &x);
	float a = log(x);
	float b = sqrt(pow(x, 2) + pow(t, 2));
	float y = pow(fabs(a - (b * x)), 1. / 5);
	printf("Ответ:%.4f\n", y);
	int A = a;
	int B = b;
	int C = y;
	printf("A(целая часть a) = %d\n",A);
	printf("B(целая часть b) = %d\n",B);
	printf("C(целая часть y) = %d\n",C);
	int D = A % 2 + B % 2;
	int E = A % 3 + B % 3 + C % 3;
	puts("условие а) верное если D = 1\nусловие б) верное если E = 0");
	printf("D = %d\nE = %d\n", D, E);

	system("pause");

}
