#include <stdio.h>
#include <string.h>

//ex 1.1 1.2
int main()
{
    char Name[20];

    char Snew[40] = "HELLO ";

    printf("What's ur name?\n");
    scanf("%s", &Name);
    for (int i = 0; i < strlen(Name); i++)
    {
        Name[i] = toupper(Name[i]);
    }
    strcat(Snew, Name);
    strcat(Snew, "!\n");
    printf("%s\n", Snew);
    system("pause");
}
