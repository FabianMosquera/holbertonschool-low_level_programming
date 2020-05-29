#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		new_hash = NULL;
		return (NULL);
	}
	while (idx < size)
	{
		new_hash->array[idx] = NULL;
		idx++;
	}
	new_hash->size = size;
	return (new_hash);
}
