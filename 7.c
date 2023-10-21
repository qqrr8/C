#include <locale.h>
#include <stdio.h>

//ex 1
int main()

{
	setlocale(LC_ALL, "RUS");
	char c;
	printf("Введите букву или цифру: ");
	scanf("%c", &c);//считывание с консоли
	switch (c)
	{
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		printf("это буква\n");
		break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("это цифра\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;
	system("pause");
}


//ex 2
#include <math.h>
#define _USE_MATH_DEFINES
int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	char c;
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("%.2f\n", x + y);
		break;
	case '-':
		printf("%.2f\n", x - y);
		break;
	case '*':
		printf("%.2f\n", x * y);
		break;
	case '/':
		printf("%.2f\n", x / y);
		break;
	case '^':
		printf("%.2f\n", pow(x, y));
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;
	system("pause");
}


// 3
int main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	printf("Введите цифру:");
	scanf("%c", &c);
	switch (c)
	{
	case '0':
		printf("zero\n");
		break;
	case '1':
		printf("one\n");
		break;
	case '2':
		printf("two\n");
		break;
	case '3':
		printf("three\n");
		break;
	case '4':
		printf("four\n");
		break;
	case '5':
		printf("five\n");
		break;
	case '6':
		printf("six\n");
		break;
	case '7':
		printf("seven\n");
		break;
	case '8':
		printf("eight\n");
		break;
	case '9':
		printf("nine\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;
	system("pause");
}
