#include "main.h"

/**
 * binary_to_uint - function to convert binary toi
 * @b: the binary input
 * Return: int
*/

unsigned int binary_to_uint(const char *b)
{
	int i, base = 1;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			uint += base;
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		base = base * 2;
	}
	return (uint);
}
