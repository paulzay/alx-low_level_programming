#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - fn
 * @s1: first param
 * @s2: second param
 * Return: type char
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int lengths1 = 0;
	int lengths2 = 0;
	int strlngth;
	char *output;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			lengths1++;
			i++;
		}
	}

	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			lengths2++;
			j++;
		}
	}

	strlngth = lengths2 + lengths1;
	output = (char *)malloc(sizeof(char) * (strlngth + 1));

	if (output == NULL)
		return (NULL);
}
