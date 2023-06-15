#include "lists.h"

/**
 * dlistint_len - return linked list length.
 * @h: doubly linked listt.
 * Return: the number of elements in linked dlistint_t listt.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
		h = h->next, length++;

	return (length);
}
