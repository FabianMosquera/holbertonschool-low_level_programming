#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: dictionary format
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			printf("'%s' : '%s'", tmp->key, tmp->value);
			if (ht->array[idx + 1] == NULL)
				break;
			printf(", ");
			tmp = tmp->next;
		}
		idx++;
	}
	printf("}\n");
}
