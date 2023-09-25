#include "main.h"

/**
 * print_chessboard - fn
 * @a: input
 * Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = 0;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}
