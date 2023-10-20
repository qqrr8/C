#include <locale.h>
#include <stdio.h>


//ex 1
int main()
{
	setlocale(LC_ALL, "RUS");
	//char c = '!';
	//int i = 2;
	//float f = 3.14f;
	//double d = 5e-12;

	//printf("%c\n%i\n%f\n%.0e\n", c, i, f, d);
	
	char c;
	puts("Введите переменную значение переменной типа char:");
	scanf("%c", &c);
	printf("c = %c\n", c);

	int i;
	puts("Введите переменную значение переменной типа int:");
	scanf("%i", &i);
	printf("i = %i\n", i);

	float f;
	puts("Введите переменную значение переменной типа float:");
	scanf("%f", &f);
	printf("f = %.5f\n", f);

	double d;
	puts("Введите переменную значение переменной типа double:");
	scanf("%d", &d);
	printf("d = %d\n", d);

	system("pause");
}

//ex 1a
int main()
{
	setlocale(LC_ALL, "RUS");

	float f;
	puts("Введите переменную значение переменной типа float:");
	scanf("%f", &f);
	printf("Целая часть:%.0f\n", f);
	int c = f;
	printf("Дробная часть:%.3f\n", f - c);

	system("pause");
}

//ex 2
int main()
{
	setlocale(LC_ALL, "RUS");

	int a = 11;
	int b = 3;

	//int x = a / b;
	//float y = a / b;
	//double z = a / b;

	//printf("x = %d - целое число\n", x);
	//printf("y = %f - число с плавающей точкой\n", y);
	//printf("z = %lf - длинное вещественное число\n", z);

	printf("%d\n", (int)a / b);
	printf("%f\n", (float)a / b);
	printf("%lf\n", (double)a / b);

	system("pause");

}

//ex 3
int main()
{
	setlocale(LC_ALL, "RUS");

	int n;
	puts("Введите трехзначное число:");
	scanf("%d", &n);
	printf("Ваше число:%d\n", n);
	printf("Первая цифра:%d\n", n/100);
	printf("Последняя цифра:%d\n", n%10);
	int a = n / 100;
	int b = n / 10 % 10;
	int c = n % 10;
	printf("Сумма цифр:%d\n", a + b + c); 
	printf("Число наоборот:%d%d%d\n", c, b, a);

	system("pause");

}

//homework
int main()
{
	setlocale(LC_ALL, "RUS");
	
	float a;
	float b;
	float p;
	puts("Программа для расчета стоимости обоев");
	puts("Введите длину стены в метрах:");
	scanf("%f", &a);
	puts("Введите высоту стены в метрах:");
	scanf("%f", &b);
	puts("Введите цену рулона обоев в рублях:");
	scanf("%f", &p);
	printf("Длина стены: %.0f метров\n", a);
	printf("Высота стены: %.0f метров\n", b);
	printf("Цена рулона: %.0f рублей\n", p);
	float aa = 12;
	printf("Цена обоев для вашей стены:%.2f\n", a * b / aa * p);
	printf("Количество необходимых рулонов:%.2f\n", a * b / aa);

	system("pause");

}
