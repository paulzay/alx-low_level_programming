#include "lists.h"
/**
 * free_listint2 - free
 * @head: head
 * Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *currentNode, *temp;

	if (head != NULL)
	{
		currentNode = *head;
		while ((temp = currentNode) != NULL)
		{
			currentNode = currentNode->next;
			free(temp);
		}
		*head = NULL;
	}
}
