#include <locale.h>

#include <stdio.h>

//ex 1
int main()
{
	setlocale(LC_ALL, "RUS");

	int num1;
	puts("Введите число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);

	int num2;
	puts("Введите число");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);

	printf("Сумма:%d\n", num1 + num2);
	printf("Разность:%d\n", num1 - num2);
	printf("Произведение:%d\n", num1 * num2);
	printf("Частное:%d\n", num1 / num2);
	printf("Остаток от деления:%d\n", num1 % num2);
	getchar();

	system("pause");
}


//ex 2
#define D 2.54
#define P 2.32166

int main()
{
	setlocale(LC_ALL, "RUS");

	int dym;
	float result_en;
	float result_sp;
	puts("Введите значение:");
	scanf("%d", &dym);
	result_en = D * dym;
	result_sp = P * dym;
	printf("%d английских дюймов – это %.2f см\n", dym, result_en);
	printf("%d испанских дюймов – это %.2f см\n", dym, result_sp);

	system("pause");
}


//ex 2a
#define M 1.852 //морская миля 
#define S 1.609 //сухопутная миля
#define R 1.475 //римская миля
#define O 7.468 //старорусская миля
#define G 7412.6 //географическая миля

int main()
{
	setlocale(LC_ALL, "RUS");

	int mile;
	float result_m;
	float result_s;
	float result_r;
	float result_o;
	float result_g;
	puts("Программа пересчета миль в км");
	puts("Введите значение:");
	scanf("%d", &mile);
	result_m = M * mile;
	result_s = S * mile;
	result_r = R * mile;
	result_o = O * mile;
	result_g = G * mile;
	printf("%d морских миль = %.2f км\n", mile, result_m);
	printf("%d сухопутных миль = %.2f км\n", mile, result_s);
	printf("%d римских миль = %.2f км\n", mile, result_r);
	printf("%d старорусских миль = %.2f км\n", mile, result_o);
	printf("%d географических миль = %.2f км\n", mile, result_g);

	system("pause");
}


//ex 3
int main()
{
	setlocale(LC_ALL, "RUS");

	int a;
	int b;
	puts("Введите значение a:");
	scanf("%d", &a);
	puts("Введите значение b:");
	scanf("%d", &b);
	puts("-------------");
	puts("|a*b|a+b|a-b|");
	puts("-------------");
	printf("|%d*%d|%d+%d|%d-%d|\n", a, b, a, b, a, b);
	puts("-------------");
	printf("|%d | %d |%d |\n", a*b, a+b, a-b);
	system("pause");
}


//homework
#define g 9.8

int main()
{
	setlocale(LC_ALL, "RUS");

	int weight;
	puts("Программа для нахождения силы тяжести");
	puts("Введите массу тела:");
	scanf("%d", &weight);
	printf("Сила тяжести равна %.0fН\n", weight*g);
	system("pause");
}
