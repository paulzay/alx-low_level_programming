#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct list {
	char *str;
	unsigned int len;
	struct list *next;
};

typedef struct list list_t;

size_t print_list(const list_t *h);

#endif
