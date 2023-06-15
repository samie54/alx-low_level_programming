#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t listt.
 * @h: doubly linked listt.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter_t = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter_t++;
	}
	return (counter_t);
}
