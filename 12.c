#include <stdio.h>
#include <locale.h>

//ex 1
int main()
{
setlocale(LC_ALL, "RUS");
int* pi, i = 5;

float* pf, f = 2.1f;
double* pd, d = 4.1f;
char* ct, c = 3.18f;
printf("Int* = %lu\n", sizeof(pi));
printf("FLoat* = %lu\n", sizeof(pf));

printf("Int = %lu\n", sizeof(i));
printf("Float = %lu\n", sizeof(f));
printf("double = %lu\n", sizeof(d));
printf("char = %lu\n", sizeof(c));
}

//ex 2
int main()
{
setlocale(LC_ALL, "RUS");
int* pi, a = 5; ;

float* pf, f = 2.1f;
double* pd, d = 4.1f;
char* pc, c = 2.29f, i = '5';
pc = &i;
pi = &a;
pd = &d;
printf("По адресу %p хранится %c(Адрес переменной = %p)\n ", pc, c, &c);
printf("По адресу %p хранится %c(Адрес переменной = %p)\n ", pi, a, &a);
printf("По адресу %p хранится %c(Адрес переменной = %p)\n ", pd, d, &d);
}

//ex 3
int main()
{
setlocale(LC_ALL, "RUS");
int* pa, x = 5;
pa = &x;
printf("По даресу %p хранится *ptr=%d\n", pa, *pa);
pa++;
printf("По даресу %p хранится *ptr=%d\n", pa, *pa);
pa--;
printf("По даресу %p хранится *ptr=%d\n", pa, *pa);
pa--;
printf("По даресу %p хранится *ptr=%d\n", pa, *pa);
x--;
printf("По даресу %p хранится *ptr=%d\n", pa, *pa);
}

//ex 5
void main(void)
{
	int x = 0x12345678;
	int* prt;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;

	prt = &x;
	a = (unsigned char*)prt;

	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;

	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
}
