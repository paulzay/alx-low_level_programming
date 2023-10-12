#include "variadic_functions.h"
#include <stdarg.h>

/**
 * op_print_float - prints float
 * @args: blah
 * Return: nada
*/

void op_print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * op_print_char - prints chars
 * @args: blah
 * Return: nada
*/

void op_print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * op_print_int - prints nums
 * @args: blah
 * Return: nada
*/

void op_print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}

/**
 * op_print_string - prints strings
 * @args: blah
 * Return: nada
*/

void op_print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
		return;
	}
}

/**
 * print_all - fn
 * @format: input
 * Return: nada
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"f", op_print_float},
		{"i", op_print_int},
		{"c", op_print_char},
		{"s", op_print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
