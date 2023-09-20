#include "main.h"

/**
 * reverse_array - fn that reverses array
 * @a: input
 * @n: input
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j++;
	}
}
