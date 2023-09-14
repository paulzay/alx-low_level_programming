#include "main.h"

/**
 * more_numbers - fn
 * Description: tba
 * Return: 0
*/

void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		} 
		_putchar('\n');
	}
}
