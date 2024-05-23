#include "search_algos.h"

/**
 * jump_search - jump
 * @array: the array
 * size: size
 * @value: value
 * Return: index of val
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t low = 0;
	size_t high = 0 + step;
	int i;
	int jumps = 0;

	if (array == NULL)
		return (-1);

	while (low < high)
	{
		jumps++;
		i += step
	}


	return (-1)
}
