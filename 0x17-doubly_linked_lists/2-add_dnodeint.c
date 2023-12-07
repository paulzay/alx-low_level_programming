#include "lists.h"

/**
 * add_dnodeint - function to add node at beginning
 * @head: head node
 * @n: the value to be added
 * Description: add node
 * Return: the node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
