#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct l_list - linked list node
 * @str: strign
 * @len: string length
 * @next: pointer to next node
*/

struct l_list
{
	char *str;
	unsigned int len;
	struct l_list *next;
};

typedef struct l_list list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
