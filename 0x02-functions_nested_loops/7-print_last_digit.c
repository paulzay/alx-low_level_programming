#include "main.h"

/**
 * print_last_digit - printing -1 digit
 * @i: the input
 * Return: last_digit
*/

int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		last_digit = -1 * (i % 10);
	}
	else
	{
		last_digit = i % 10;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
