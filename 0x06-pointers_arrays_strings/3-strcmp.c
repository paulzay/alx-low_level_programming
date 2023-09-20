#include "main.h"

/**
 * _strcmp - fn that copies string
 * @s1: input
 * @s2: input
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
		i++;
	}

	return (j);
}
