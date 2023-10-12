#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fn to add
 * @n: number of integers
 * Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
