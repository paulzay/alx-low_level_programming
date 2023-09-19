#include "main.h"

/**
 * print_rev - fn
 * @s: input
*/

void print_rev(char *s)
{
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
