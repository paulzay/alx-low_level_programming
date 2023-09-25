#include "main.h"

/**
 * _strspn - fn
 * @s: input
 * @accept: input
 * Return: int
*/

unsigned int _strspn(char *s, char *accept);
{
	int i = 0, j = 0, k;

	while (s[i] != '\0')
	{
		k = 1;
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
