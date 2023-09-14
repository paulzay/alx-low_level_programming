#include "main.h"

/**
 * print_line - fn
 * @n: input
 * Return: 0
*/

void print_line(int n)
{
	int count;

	if (n >= 1)
	{
		for (count = 0; count <= n - 1; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
