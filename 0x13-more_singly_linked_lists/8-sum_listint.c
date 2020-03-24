#include "lists.h"

/**
 * sum_listint - compute the sum of all elements in a linked  list
 * @head: pointer
 * Return: Sum of the list
 */
int sum_listint(listint_t *head)
{
	return (head ? head->n + sum_listint(head->next) : 0);
}
