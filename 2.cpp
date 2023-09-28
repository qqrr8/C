#include <locale.h>

#include <stdio.h>

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