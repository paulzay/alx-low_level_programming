#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - fn
 * @width: input
 * @height: input
 * Return: int type
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **k;

	if (width < 0 || height < 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);
	if (k == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		k[i] = malloc(sizeof(int) * width);
		if (k[i] == NULL)
		{
			while (i >= 0)
			{
				free(k[i]);
				i--;
			}
			free(k);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			k[i][j] = 0;
	}

	return (k);
}
