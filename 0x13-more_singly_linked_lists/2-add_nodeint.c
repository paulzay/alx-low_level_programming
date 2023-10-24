#include "lists.h"

/**
 * add_nodeint - add node to start of list
 * @head: the head
 * @n: n
 * Return: the address
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
			newNode->next = NULL;
		else
			newNode->next = *head;
	}
	newNode->n = n;
	*head = newNode;
	return (*head);
}
