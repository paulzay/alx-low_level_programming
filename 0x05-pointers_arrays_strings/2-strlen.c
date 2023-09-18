#include "main.h"

/**
 * _strlen - fn
 * @s: input
 * Return: 0
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
