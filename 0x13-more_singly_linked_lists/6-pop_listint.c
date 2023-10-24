#include "lists.h"

/**
 * pop_listint - delete first node
 * @head: pointer to pointer
 * Return: 0
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tempNode;

	if (*head != NULL)
	{
		i = (*head)->n;
		tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
		return (i);
	}
	else
		return (0);
}
