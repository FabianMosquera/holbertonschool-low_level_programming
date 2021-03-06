#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
