#include "main.h"

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
	return (0);

}
