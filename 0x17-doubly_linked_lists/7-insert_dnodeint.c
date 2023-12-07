#include "lists.h"
/**
 * insert_dnodeint_at_index - fn
 * @h: head node
 * @idx: index
 * @n: the data
 * Description: tba
 * Return: node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t currentNode = *head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (idx = 0)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
	}

	while (currentNode)
	{
		if (idx - 1 == count)
		{
			if (currentNode->next == NULL)
				return (add_dnodeint_end(head, n));
			newNode->n = n;
			newNode->next = currentNode;
			currentNode->next->prev = newNode;
			return (newNode);
		}
		currentNode = currentNode->next;

	}
	return (NULL);
}
