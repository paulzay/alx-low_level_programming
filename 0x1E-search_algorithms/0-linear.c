#include "search_algos.h"

/**
* linear_search - search algo
* @value: the value
* @array: pointer to the array
* @size: array length
* Return: the index of value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
