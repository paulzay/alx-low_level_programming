#include "main.h"

/**
 * rev_string - fn
 * @s: input
*/

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < 1 / 2; j++)
	{
		c = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 -j] = c;
	}
}
