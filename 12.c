#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

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

//ex 4
int main()
{
setlocale(LC_ALL, "RUS");

float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };

float* ptr_a;
ptr_a = array;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
ptr_a++;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
ptr_a++;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
ptr_a--;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
ptr_a += 2;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
ptr_a += 2;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
ptr_a -= 2;
printf("По даресу %p хранится *ptr=%f\n", ptr_a, *ptr_a);
}
