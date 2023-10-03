#include "main.h"
#include <stdlib.h>

/**
 * _strdup - fn returns ptr to space in mem
 * @str: input
 * Return: of type char
*/
char *_strdup(char *str)
{
	char *st;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	st = malloc(sizeof(char) * (j + i));

	if (st == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		st[i] = str[i];
		i++;
	}

	return (st);
}
