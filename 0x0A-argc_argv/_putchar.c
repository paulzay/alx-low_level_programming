#include <unistd.h>

/**
 * _putchar - prints stuff
 * @c: the character to print
 * Return: 1 or 
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}