#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @head: pointer
 * @index: unsigned int
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head && index)
		return (get_nodeint_at_index(head->next, index - 1));
	return (head);
}
