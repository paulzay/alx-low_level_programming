#include "lists.h"
#include <string.h>
/**
 * add_node_end - pointer to function that
 * add node to end of list
 * @head: pointer to pointer
 * @str: pointer to string
 * Return: tail
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp;
	size_t i = 0;

	if (str == NULL)
		i = 0;

	while (str[i] != '\0')
		i++;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	(*node).str = strdup(str);
	(*node).len = i;
	(*node).next = NULL;

	tmp = *head;
	if (tmp == NULL)
	{
		*head = node;
	}
	else
	{
		while ((*tmp).next != NULL)
			tmp = (*tmp).next;
		tmp->next = node;
	}
	return (*head);
}
