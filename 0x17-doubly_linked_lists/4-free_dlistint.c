#include "lists.h"

/**
 * free_dlistint - frees doubly linked dlist.
 * @head: pointer to list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
