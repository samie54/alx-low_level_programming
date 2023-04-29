#include <stdlib.h>
#include "lists.h"

/************* Free list  ****************/
/**
 * free_listint - frees a linked list
 * frees all nodes of a list
 * @head: listint_t list to be freed
 * pointer to head node
 */

/************* Free list codes ****************/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
