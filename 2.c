#include <locale.h>

#include <stdio.h>

//ex 1

int main()

{
	setlocale(LC_ALL, "RUS");

	printf("%20s\n", "Это текст");
	printf("%s\n", "Это текст");
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен % d\n ", 7, 5, 7 % 5);
	printf("Деление %d на %d равно %d\n", 7, 5, 7 / 5);
	printf("Умножение %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);

	//все спецификаторы заменены на d:
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);

	//все спецификаторы заменены на f:
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);

	//все спецификаторы заменены на e:
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);

	getchar();
}
//ex 2

int main()

{
	setlocale(LC_ALL, "RUS");

	int N, K;
	N = 12;
	K = 55;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K + N * 60);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("C 8.00 прошло %d секунд\n", ((N - 8) * 3600) + K * 60);
	printf("Текущий час %d суток и текущая минута %d часа\n", N / 24, K / 60);
	getchar();
}

//ex 3

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int n, l;
	n = 4;
	l = 337;
	float c;
	c = (float)n / l;
	printf("Дано:\n %10d\n %10d\nОтвет:\n %+010.3f\n", n, l, c);
	getchar();
}
