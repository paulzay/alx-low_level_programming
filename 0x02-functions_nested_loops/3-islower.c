#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: the input
 *
 * Return: Success(0) or Error(1)
*/

int _islower(int c)
{

	if (c == tolower(c))
	{
		return (1);
	}
	if (typeof(c) == int)
	{
		return (0);
	}
	return (0);
}
