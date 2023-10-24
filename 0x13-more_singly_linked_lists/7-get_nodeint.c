#include "lists.h"
/**
 * get_nodeint_at_index - return node at index
 * @head: pointer
 * @index: the index
 * Return: the node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	currentNode = head;
	while (currentNode != NULL)
	{
		if (count == index)
			return (currentNode);
		count++;
		currentNode = currentNode->next;
	}
	return (currentNode);
}
