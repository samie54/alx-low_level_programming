#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of  doubly linked listt.
 * @head: double pointerr to listt.
 * @n: data insertion  in the new node.
 *
 * Return: address of new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
