#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fn that allocates joins strings
 * @s1: first param
 * @s2: second param
 * @n: size
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	int lengths1 = 0;
	int lengths2 = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}

	while (s2[lengths2] != '\0')
	{
		lengths2++;
	}

	output = malloc((lengths1 * sizeof(char)) + (lengths2 + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		output[i] = s2[j];
		i++;
	}
	output[i] = '\0';

	return (output);
}

