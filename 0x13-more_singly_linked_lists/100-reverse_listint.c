#include "lists.h"

/**
 * reverse_listint - reverses an int list in linked list
 * @head: pointer to first node in the linked list
 *
 * Return: pointer to first node
 */

/**************************** Reverse list code *************************/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
