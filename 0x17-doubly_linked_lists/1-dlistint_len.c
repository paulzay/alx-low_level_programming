#include "lists.h"
/**
 * dlistint_len - function to print lists
 * @h: the head node
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
