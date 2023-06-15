#include "lists.h"

/**
 * dlistint_len - return linked list length.
 * @h: doubly linked listt.
 * Return: the number of elements in linked dlistint_t listt.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
