#include "hash_tables.h"

/**
 * hash_table_set - add
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index, i;
	char *dup;

	if (ht == NULL || key == NULL || *key == 48 || value == NULL)
		return (0);

	dup = strdup(value);
	if (dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(dup);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = dup;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
