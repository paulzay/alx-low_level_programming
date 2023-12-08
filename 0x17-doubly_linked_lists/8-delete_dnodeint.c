#include "lists.h"
/**
 * delete_dnodeint_at_index - fn
 * @head: head
 * @index: index
 * Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode = *head;
	dlistint_t *tempNode = *head;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (currentNode->next == NULL)
	{
		return (1);
	}
	while (currentNode)
	{
		if (index == n)
		{
			tempNode = currentNode->next;
			currentNode = tempNode;
		}

		currentNode = currentNode->next;
	}
	free(currentNode);
	return (1);
}
