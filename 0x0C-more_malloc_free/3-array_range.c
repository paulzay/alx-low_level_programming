#include "main.h"
#include <stdlib.h>

/**
 * array_range - fn that allocates mem
 * @min: first param
 * @max: second
 * Return: void
*/

int *array_range(int min, int max)
{
	int i;
	int s;
	int *p;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
