#include "main.h"

/**
 * print_diagonal - fn
 * @n: input
 * Return: 0
*/

void print_diagonal(int n)
{
	int count;
	int blank;

	if (n >= 1)
	{
		for (count = 0; count <= n - 1; count++)
		{
			for (blank = 1; blank <= count; blank++)
			{
				_putchar(' ');
			}
			_putchar(92 + 0);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
