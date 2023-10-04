#include <stdio.h>
#include <stdlib.h>

/**
 * main - fn
 * @argc: no of arguments
 * @argv: array
 * Return: 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, j;

	i = 0;

	while (i < argc)
	{
		j = i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}
