#include "lists.h"

/**
 * print_listint - function to count nodes
 * @h: the head of the list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int nodecount = 1;

	/*
    * If the list is empty i.e. h = NULL
    */
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n == '\0')
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("%d\n", h->n);
		}
		nodecount++; /* increment node counter */
		h = h->next; /* move to next node */
	}
	printf("%d\n", h->n);
	return (nodecount);
}
