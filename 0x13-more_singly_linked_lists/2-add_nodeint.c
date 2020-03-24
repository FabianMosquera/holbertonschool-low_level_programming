#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: pointer
 * @n: the element to add
 * Return: Memory allocation failsor head is NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
