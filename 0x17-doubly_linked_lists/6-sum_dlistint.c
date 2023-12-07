#include "lists.h"
/**
 * sum_dlistint - add
 * @head: head node
 * Description: add the datas
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int total = -;
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
