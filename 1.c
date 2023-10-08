#include <locale.h>

#include <stdio.h>

//ex 2-4

void name()
{

	setlocale(LC_ALL, "RUS");

	puts("						*******************************************");

	puts("						*                                         *");

	puts("						* Тема: разработка консольного приложения *");

	puts("						*                                         *");

	puts("						* группа бИСТ-233 Гоенок В. А.            *");

	puts("						*                                         *");

	puts("						*******************************************");
}

void date()
{

	puts(" __   __    __   __    __   __  ");
	puts("   | |     |  | |     |  | |    ");
	puts(" --   --   |  |  --   |  |  --  ");
	puts("|       |  |  | |  |  |  |    | ");
	puts(" --   -- .  --   -- .  --   -- .");
}

void main()

{

	name();

	date();

	getchar();

}

//ex 5 homework

void boat()
{
	puts("           /|          ");
	puts("          / |          ");
	puts("         /  |          ");
	puts("        /___|          ");
	puts("            |          ");
	puts("            |          ");
	puts("|----------------------|");
	puts(" |                    |");
	puts("  |__________________|");
}

void house()
{
	puts("       |         ");
	puts("     |   |       ");
	puts("   |       |     ");
	puts(" |___________|   ");
	puts("|   ---       |  ");
	puts("|  | | |  __  |  ");
	puts("|   ---  |  | |  ");
	puts("|        |  | |  ");
	puts("|________|__|_|  ");
}

void main()

{
	boat();

	house();

	getchar();

}