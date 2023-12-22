#include "hash_tables.h"
/**
 * hash_table_create - tbs
 * @size: size
 * Return: node
*/

hash_table_t *hash_table_create(unsigned long int size)
{
  int i;

  hash_table_t *table;
  table = malloc(sizeof(hash_table_t));
  if (table == NULL)
    return (NULL);

  table->size = size;
  table->array = malloc(sizeof(hash_node_t *) * size);

  if (table->array == NULL)
    return (NULL);

  for (i = 0;size; i++)
  {
    table->array[i] = NULL;
  }

  return (table);
}
