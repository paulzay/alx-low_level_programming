#include <stdio.h>
#include <stdlib.h>

/**
*/

int main(int argc, char __attribut__((unused)) *argv[])
{
	int i, j;

	i = 0;

	while (i < argv)
	{
		j = i;
		i++;
	}
	printf("%d\n", j);
	return 0;
}
