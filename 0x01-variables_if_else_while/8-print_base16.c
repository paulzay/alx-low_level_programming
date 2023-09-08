#include <stdio.h>

/**
 * main - entry point
 *
 * Description: tba
 *
 * Return: Always Successful (0)
*/

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 15; i++)
	{
		c = i + '0';
		if (c > '9')
		{
			c = c - 10 + 'A';
		}
		putchar(c);
	}

	putchar('\n');

	return (0);
}
