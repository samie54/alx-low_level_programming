#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index in linked list
 * @head: pointer to first node in the linked list
 * @index: index of node to return
 *
 * Return: NULL, or pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
