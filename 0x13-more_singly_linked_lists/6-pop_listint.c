#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: the first the element
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *old;

	if (!(*head && head))
		return (0);

	data = (*head)->n;

	old = *head;
	*head = old->next;
	free(old);

	return (data);
}
