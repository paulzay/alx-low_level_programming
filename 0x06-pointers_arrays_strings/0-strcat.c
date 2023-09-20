#include "main.h"

/**
 * _strcat - fn
 * @dest: input
 * @src: input
 * Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (dest[j] != '\0')
	{
		src[i] = dest[j];
		i++;
		j++;
	}

	src[i] = '\0';

	return (src);
}
