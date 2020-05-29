#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 is success or 0 if is otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *var = NULL;
	hash_node_t *tmp = NULL;
	hash_node_t *new = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0 || key == NULL)
		return (0);
	var = strdup(value);
	if (var == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = var;
			tmp->value = strdup(value);
			free(var);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = var;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
