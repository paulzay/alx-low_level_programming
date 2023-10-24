#include "lists.h"

/**
 * listint_len - return length of the list
 * @h: the head of the list
 * Return: length of list
*/
size_t listint_len(const listint_t *h)
{
	int len = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
