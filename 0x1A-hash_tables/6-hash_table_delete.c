#include "hash_tables.h"
/**
 * hash_table_delete - function to delete from hash_tables
 * @ht: pointer to hash_tables
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *currentNode, *tempNode;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			currentNode = ht->array[i];
			while (currentNode != NULL)
			{
				tempNode = currentNode->next;
				free(currentNode->key);
				free(currentNode->value);
				free(currentNode);
				currentNode = tempNode;
			}
		}
	}
	free(head->array);
	free(head);
}
