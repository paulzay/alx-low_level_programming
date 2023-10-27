#include "main.h"

/**
 * get_endianness - get endianess
 * Return: 0 or 1
*/
int get_endianness(void)
{
	char *c;
	int n;

	n = 1;
	c = (char *)&n;
	return (*c);
}
