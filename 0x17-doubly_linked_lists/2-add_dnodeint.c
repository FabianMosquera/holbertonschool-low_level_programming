#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: header pointer
 * @n: integer value
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->prev = NULL;
	if (*head == NULL)
	{
		n_node->next = NULL;
		*head = n_node;
	}
	else
	{
		n_node->next = *head;
		(*head)->prev = n_node;
		*head = n_node;
	}
	return (n_node);
}
