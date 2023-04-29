#include "lists.h"

/**
 * free_listint2 - prints a freed linked list
 * @head: pointer to freed listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = 0;

;
}

