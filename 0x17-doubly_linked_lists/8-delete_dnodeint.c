#include "lists.h"
/**
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode = *head;
	dlistint_t tempNode = NULL;
	unsigned int n;

	if (*head == NULL)
		return (-1);
}
