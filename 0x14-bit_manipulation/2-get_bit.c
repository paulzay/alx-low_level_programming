#include "main.h"

/**
 * get_bit - fn
 * @n: int
 * @index: index
 * Return: index
*/
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
