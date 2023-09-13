include "main.h"

void fibonacci(void)
{
	int n;
	int firstnum = 1;
	int secondnum = 2;

	printf("%d, %d ", firstnum, secondnum);

	for (n = 3; n <= 98; n++)
	{
		nextnum = firstnum + secondnum;
		printf("%d, ", nextnum);
		firstnum = secondnum;
		secondnum = nextnum;
	}
	printf("\n");
}