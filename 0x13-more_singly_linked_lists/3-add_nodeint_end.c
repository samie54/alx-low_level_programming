#include <stdlib.h>
#include <string.h>
#include "lists.h"

/************* Add node at the end comments  ****************/
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: address of pointer to
 * to head node; double pointer to the list_t list
 * @str: string to put in the new node
 * str field of list
 *
 * Return: address of the new element, or NULL if it failed
 * size of list
 */

/************* Add node at the end codes  ****************/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;

listint_t *new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}

