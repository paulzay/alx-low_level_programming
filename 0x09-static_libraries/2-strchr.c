#include "main.h"

/**
 * _strchr - fn
 * @s: input
 * @c: input
 * Return: char
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
