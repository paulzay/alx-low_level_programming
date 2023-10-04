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
	char *output;
	int strlngth = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[lengths1] != '\0')
		{
			lengths1++;
		}
	}

	if (s2 != NULL)
	{
		j = 0;
		while (s2[lengths2] != '\0')
		{
			lengths2++;
		}
	}

	output = malloc((lengths1 * sizeof(char)) + (lengths2 + 1) * sizeof(char));

	if (output == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];

	for (j = 0; s[j] != '\0'; j++)
		output[i] = s2[j];
		i++;

	output[i] = '\0';

	return (output);
}
