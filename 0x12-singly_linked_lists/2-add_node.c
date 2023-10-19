#include "lists.h"
#include <string.h>
/**
 * add_node - pointer to function that
 * add node
 * @head: pointer to pointer
 * @str: pointer to string
 * Return: head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;
	size_t i = 0;

	if (str == NULL)
		i = 0;

	while (str[i] != '\0')
		i++;

	first_node = malloc(sizeof(list_t));

	if (*head == NULL)
	{
		(*first_node).next = NULL;
	}
	else
		(*first_node).next = *head;

	(*first_node).str = strdup(str);
	(*first_node).len = i;
	*head = first_node;

	return (*head);
}
