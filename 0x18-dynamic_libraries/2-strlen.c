#include "main.h"

/**
 * _strlen - fn
 * @s: input
 * Return: 0
*/

int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
