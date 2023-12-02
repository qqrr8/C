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
        printf("\n A[%d]    | %.0f                 | %.0f", i, A[i], pow(A[i],2));
    }
    float b = (A[0] + A[1] + A[2] + A[3] + A[4] + A[5] + A[6] + A[7] + A[8] + A[9]) / 10;
    printf("\nСреднее арифметическое:%f\n", b);
    system("pause");
}
