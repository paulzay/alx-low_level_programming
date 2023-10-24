#include "lists.h"

/**
 * free_listint - free a list
 * @head: head
 * Return: 0
*/
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = (*head).next;
		free(currentNode);
	}
}
