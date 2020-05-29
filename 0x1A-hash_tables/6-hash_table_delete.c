#include "hash_tables.h"
/**
 * hash_table_delete -  function that deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;
	hash_node_t *tmp2 = NULL;

	if (ht == NULL)
		return;
	while (idx < ht->size)
	{
		tmp2 = ht->array[idx];
		while (tmp)
		{
			tmp = tmp2;
			tmp2 = tmp2->next;
			if (tmp->key != NULL)
				free(tmp->key);
			if (tmp->value != NULL)
				free(tmp->value);
			free(tmp);
		}
		free(ht->array[idx]);
		idx++;
	}
	free(ht->array);
	free(ht);
}
