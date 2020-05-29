#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value by a key
 * @ht: hash table
 * @key: key
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

	if (key == NULL)
		return (NULL);
	if (ht != NULL)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
