#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the size of various types on this pc
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	char a;
	int b;
	float c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", (unsigned int) sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n",
	(unsigned long long) sizeof(b));
	printf("Size of a float: %lu bytes(s)\n", sizeof(c));
	
	return (0);

}
