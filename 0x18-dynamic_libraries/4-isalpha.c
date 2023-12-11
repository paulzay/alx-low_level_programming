#include "main.h"

/**
 * _isalpha - checks for lowercase character
 *
 * @c: the input
 *
 * Return: Success(0) or Error(1)
*/

int _isalpha(int c)
{

	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}
