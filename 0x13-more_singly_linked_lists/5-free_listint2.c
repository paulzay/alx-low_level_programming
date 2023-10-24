#include "lists.h"
/**
 * free_listint2 - free
 * @head: head
 * Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	while ((currentNode = *head) != NULL)
	{
		*head = NULL;
		free(currentNode);
	}
}
