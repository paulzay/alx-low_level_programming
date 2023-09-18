#include "main.h"

/**
 * swap_int - fn
 * @a: input
 * @b: input
*/

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

