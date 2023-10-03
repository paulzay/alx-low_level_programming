#include "main.h"
#include <stdlib.h>
/**
 * create_array - fn that create arrays of chars
 * @size: size of array
 * @c: char
 * Return: of type char
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}
