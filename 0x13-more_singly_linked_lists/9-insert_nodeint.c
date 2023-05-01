#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index in linked list
 * @head: address of pointer to first node in the linked list
 * @idx: index to where new node added
 * @n: n data of new node
 *
 * Return: pointer to new node
 */

/******************************** Insert code ******************************/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (0);

	new->n = n;
	new->next = 0;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (0);
}
