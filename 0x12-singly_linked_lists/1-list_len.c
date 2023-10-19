#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: the list?
 * Return: sth
*/

size_t list_len(const list_t *h)
{
	int nodes = 1;

	if (h == NULL)
		return (0);

	while ((*h).next != NULL)
	{
		h = (*h).next;
		nodes++;
	}
	return (nodes);
}
