#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: pointer to head
 * Return: the HEAD
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempNode, *previouseNode, *currentNode;

	currentNode = *head;
	previouseNode = NULL;

	if (*head == NULL)
		return (NULL);

	while (currentNode != NULL)
	{
		tempNode = currentNode->next;
		currentNode->next = previouseNode;
		previouseNode = currentNode;
		currentNode = tempNode;
	}
	*head = previouseNode;
	return (*head);
}
