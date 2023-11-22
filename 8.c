#include <locale.h>
#include <stdio.h>

//ex 1
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, m;
    int s = 0;
    printf("Введите значение: ");
    scanf("%d", &n);
    printf("Введите значение: ");
    scanf("%d", &m);
    for (int i = m; i >= n; i--)
    {
        s += i;
    }
    printf("результат %d\n", s);

    system("pause");
}
