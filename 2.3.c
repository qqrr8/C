#include <locale.h>

#include <stdio.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int n,l;
	n = 4;
	l = 337;
	float c;
	c = (float)n/l;
	printf("Дано:\n %10d\n %10d\nОтвет:\n %+010.3f\n", n, l, c);
	getchar();

}