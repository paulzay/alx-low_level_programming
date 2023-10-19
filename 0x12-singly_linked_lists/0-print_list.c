#include "lists.h"

/**
 * print_list - fn prints all
 * @h: idk yet
 * Return: unkn
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (nodes);
}
