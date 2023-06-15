#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of doubly linkedd list.
 * @head: pointer to list.
 * @index: index of returning node.
 *
 * Return: address of node, or NULL if does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}
