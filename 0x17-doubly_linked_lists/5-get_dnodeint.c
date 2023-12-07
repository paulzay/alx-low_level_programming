#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head node
 * @index: index to get from
 * Description: get node at index
 * Return: node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *currentNode = head;

	while (currentNode && count < index)
	{
		count++;
		currentNode = currentNode->next;
	}
	return (currentNode ? currentNode : NULL);
}
