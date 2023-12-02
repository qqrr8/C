#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define N 10

//ex 1
void main()
{
    setlocale(LC_ALL, "RUS");
    float A[N];
    float temp;
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }
    printf(" индекс  | исходное значение | новое значение");
    for (int i = 0; i <= 9; i++)
    {
        printf("\n A[%d]    | %.0f                 | %.0f", i, A[i], pow(A[i], 2));
    }
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
    }
    printf("\nСреднее арифметическое:%f\n", sum/10);
    system("pause");
}
