#include "main.h"

/**
 * print_rev - fn
 * @s: input
*/

void print_rev(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	for (counter--; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
