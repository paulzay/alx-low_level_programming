#include "main.h"

/**
 * flip_bits - fn to flip
 * @n: n
 * @m: m
 * Return: flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt;
	unsigned long int diff;

	diff = n ^ m;
	cnt = 0
	while (diff > 0)
	{
		cnt += diff & 1;
		diff >>= 1;
	}
	return (cnt);
}
