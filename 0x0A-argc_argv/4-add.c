#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fn
 * @argc: no of arguments
 * @argv: array
 * Return: 0
*/

int main(int argc, char **argv[])
{
	int i;
	int sum;
	int k;
	char *j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		for (i = 1; argv[i]; i++)
		{
			k = strtol(argv[i], &j, 10);
			if (*j)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += k;	
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
