#include "main.h"
#include <stdlib.h>

/**
 * _calloc - fn that allocates mem
 * @nmemb: first param
 * @size: size
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;

	return (c);

}
