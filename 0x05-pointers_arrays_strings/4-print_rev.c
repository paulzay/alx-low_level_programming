#include "main.h"

/**
 * print_rev - fn
 * @s: input
*/

void print_rev(char *s)
{
	int count;
	int counter;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (counter = count - 1; counter >= 0; counter--)
		{
			_putchar(s[counter]);
		}
	}
	_putchar('\n');
}
