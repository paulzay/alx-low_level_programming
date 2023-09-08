#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 *
 * Description: tba
 *
 * Return: Always success (0)
 *
 */

int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d", n, last_digit);
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{

		printf("Last digit of %d is %d", n, last_digit);
		printf(" and is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{

		printf("Last digit of %d is %d", n, last_digit);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
