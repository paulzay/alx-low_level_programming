#include "function_pointers.h"
#include <stdbool.h>

/**
 * int_index - fn
 *
 * @array: ptr to array
 * @size: size
 * @cmp: ptr to function
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool b;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			b = cmp(array[i]);
			if (b == true)
				return (i);
		}
	}
	return (-1);
}
