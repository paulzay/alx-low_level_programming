#include <stdio.h>

/**
* print_array - function to print
* @start: the start
* @end: the end
* Return: nothing
*/

void print_array(int *start, int end)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = 0; i < end - 1; i++)
		printf("%d, ", start[i]);
	printf("%d\n", start[i]);
}

/**
* binary_search - function to search
* @array: the array to search
* @size: length of the array
* @value: the search value
* Return: the index of the value
*/


int binary_search(int *array, size_t size, int value)
{
	int midpoint;
	int leftpointer = 0;
	int rightpointer = size - 1;

	if (array == NULL)
		return (-1);

	while (leftpointer <= rightpointer)
	{
		midpoint = leftpointer + (rightpointer - leftpointer) / 2;
		print_array(&array[leftpointer], rightpointer + 1 - leftpointer);

		if (array[midpoint] == value)
		{
			return (midpoint);
		} else if (array[midpoint] < value)
		{
			leftpointer = midpoint + 1;
		} else if (array[midpoint] > value)
		{
			rightpointer = midpoint - 1;
		}
	}
	return (-1);
}
