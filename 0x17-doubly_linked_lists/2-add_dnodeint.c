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

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		*head = newNode;
	}
	if (*head != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
