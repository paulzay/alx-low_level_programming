#include "main.h"

/**
 * _strspn - fn
 * @s: input
 * @accept: input
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 1;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}

	return (i);
}
