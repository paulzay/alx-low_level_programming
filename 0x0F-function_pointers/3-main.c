#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - main entry point
 * @argc: no of arguments
 * @argv: array of stuff
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == 47 || *operator == 37) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(a, b));

	return (0);
}
