#include "main.h"

/**
 * cap_string - fn
 * @str: input
 * Return: 0
*/

char *cap_string(char *str);
{
	int i, j;
	char c[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'c' && *(str + i) <= 'z')
		{
			if (i == 0)
			{
				*(str + i) -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (c[j] == *(str + i - 1))
					{
						*(str + i) -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
	return (str);
}
