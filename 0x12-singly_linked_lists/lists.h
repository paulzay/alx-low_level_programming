#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct l_list - linked list
 * @str: strign
 * @len: string length
 * @next: pointer to next node
*/

struct l_list
{
	char *str;
	unsigned int len;
	struct list *next;
};

typedef struct l_list list_t;

size_t print_list(const list_t *h);

#endif
