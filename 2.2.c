
#include <locale.h>

#include <stdio.h>

int main()

{
	setlocale(LC_ALL, "RUS");

	int N, K;
	N = 12;
	K = 55;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K+N*60);
	printf("До полуночи осталось %d часов и %d минут\n", 23-N,60-K);
	printf("C 8.00 прошло %d секунд\n", ((N-8)*3600)+K*60);
	printf("Текущий час %d суток и текущая минута %d часа\n", N / 24, K / 60);
	getchar();
}
