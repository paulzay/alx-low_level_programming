#include "function_pointers.h"

/**
 * array_iterator - fn
 *
 * @array: ptr to array
 * @size: size
 * @action: ptr to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}

	}
}
