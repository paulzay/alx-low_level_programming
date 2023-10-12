#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - fn to add
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: nada
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(args, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
			printf("(nil)");
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
