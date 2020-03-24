#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer
 * @idx: unsigned int
 * @n: elements of the list
 * Return: memory allocation
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	if (idx && *head)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	if (idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
