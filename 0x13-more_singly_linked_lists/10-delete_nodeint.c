#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 * @head: pointer to pointer
 * @index: the index to delete at
 * Return: 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		currentNode = *head;

		for (i = 0; i < index - 1 && currentNode != NULL; i++)
		{
			currentNode = currentNode->next; /* points to n-1 node*/
		}

		temp = currentNode->next; /* nth node*/
		currentNode->next = temp->next;
		free(temp);
		return (1);
	}
}
