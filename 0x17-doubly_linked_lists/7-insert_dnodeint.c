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
	dlistint_t *currentNode = *h;
	unsigned int count;

	if (!h)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (count = 0; currentNode && idx < count; count++)
	{
		if (idx - 1 == count)
		{
			if (currentNode->next == NULL)
				return (add_dnodeint_end(h, n));
			newNode->next = currentNode->next;
			newNode->prev  = currentNode;
			currentNode->next->prev = newNode;
			currentNode->next = newNode;
			return (newNode);
		}
		else
		{
			currentNode = currentNode->next;
		}

	}
	return (NULL);
}
