#include "main.h"

/**
 * print_array - fn
 * @a: first input
 * @n: second input
*/

void print_array(int *a, int n)
{
	int j;

	for (d = 0; d < n; d++)
	{
		if (d != (n - 1))
		{
			printf("%d, ", a[d]);
		}
		else
		{
			printf("%d", a[d]);
		}
	}
	printf('\n');
}
