#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

//ex 1
void CreateArray(double array[], int n)
{
    setlocale(LC_ALL, "RUS");
    printf("Введите количество элементов массива:%d", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }
}

void PrintArray(double array[], int n)
{
    setlocale(LC_ALL, "RUS");
    printf("Массив:");
    for (int i = 0; i < n; i++)
    {
        printf("%f", &array[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    double array[n];
    printf("Введите размер массива:");
    scanf("%d", &n);

    CreateArray(array, n);

    PrintArray(array, n);

    system("pause");
}
