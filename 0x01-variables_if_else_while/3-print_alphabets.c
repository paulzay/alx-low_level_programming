#include <stdio.h>

/**
 * main - entry point
 *
 * description: tba
 *
 * Return: Always successful (0)
*/

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}

	putchar('\n');
	return (0);
}
