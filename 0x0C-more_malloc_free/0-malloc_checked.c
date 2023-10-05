#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fn that allocates memory w malloc
 * @b: int
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(sizeof(n) * b);

	if (n == NULL)
	{
		exit(98);
	}
	else
		return (n);
}
