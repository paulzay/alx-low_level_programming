#include "lists.h"

/**
 * sum_listint - add list items
 * @head: pointer to head
 * Return: total
*/

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
