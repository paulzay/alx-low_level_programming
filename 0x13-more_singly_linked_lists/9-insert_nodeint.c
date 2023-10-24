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

	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
	}

	while (*head != NULL && i < idx - 1)
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL)
	{
		currentNode = *head;
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	else
	{
		newNode->next = currentNode->next;
		newNode->n = n;
		currentNode->next = newNode;
	}

	return (newNode);
}
