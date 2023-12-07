#include "lists.h"

/**
 * add_dnodeint_end - add to end
 * @head: head
 * @n: n
 * Description: tba
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode = *head;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);
}
