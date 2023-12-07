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

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (!head)
		return (NULL)

	if (*head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		while (currentNode->next != NULL)
		{
			newNode->n = n;
			newNode->next = NULL;
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}

	return (newNode);
}
