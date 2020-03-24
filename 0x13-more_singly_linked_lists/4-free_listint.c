#include "list.h"

/**
 * free_listint - free a linked list
 * @head: pointer
 */
void free_listint(listint_t *head);
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
