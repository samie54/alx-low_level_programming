#include <stdlib.h>
#include "lists.h"

/************* Free list  ****************/
/**
 * free_list - frees a linked list
 * frees all nodes of a list
 * @head: list_t list to be freed
 * pointer to head node
 */

/************* Free list codes ****************/
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

