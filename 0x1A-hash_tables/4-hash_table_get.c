#include "hash_tables.h"

/**
 * hash_table_get - fn
 * @ht: pointer to hash table
 * @key: pointer to key
 * Return: pointr
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (node = ht->array[index];
		node && strcmp(node->key, key) != 0;
		node = node->next)
		;
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (node->value);
	}
}
