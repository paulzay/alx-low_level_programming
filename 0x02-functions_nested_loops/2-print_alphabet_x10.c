#include "main.h"

/**
 * print_alphabet_10x - print a-z ten times
*/

void print_alphabet_10x(void)
{
	int c;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
