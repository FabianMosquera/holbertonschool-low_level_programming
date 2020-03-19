#include "lists.h"

/**
 * list_len - return the numbers of elements in a linked list_t list
 * @h: list
 * Return: # elements
 */
size_t list_len(const list_t *h)
{
	return (h ? list_len(h->next) + 1 : 0);
}
