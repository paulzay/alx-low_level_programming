#include "lists.h"

/**
 * insert_nodeint_at_index - add at given index
 * @head: pointer to pointer
 * @idx: index
 * @n: the data
 * Return: the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int i = 0;

	currentNode = *head;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;

	if ((*head == NULL && idx == 0) || newNode == NULL)
		return (NULL);

	while (*head != NULL && i < idx - 1)
	{
		currentNode = currentNode->next;
		if (currentNode == NULL)
		{
			return (NULL);
		}
		i++;
	}

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	if (currentNode == NULL)
		return (NULL);

	if (currentNode->next)
	{
		newNode->next = currentNode->next;
		currentNode->next = newNode;
	}
	else
	{
		newNode->next = NULL;
		currentNode->next = newNode;
	}

	return (newNode);
}
