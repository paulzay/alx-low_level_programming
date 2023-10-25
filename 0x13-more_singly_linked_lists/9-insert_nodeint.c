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
	unsigned int i;

	currentNode = *head;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if ((*head == NULL && idx == 0) || newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	currentNode = *head;
	for (i = 0; i < idx - 1; i++)
	{
		currentNode = currentNode->next;
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
