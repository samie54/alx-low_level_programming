#include "lists.h"

/**
* add_nodeint - adds a  to the beginning of the list
* @head: address of pointer to first head node
* @n: insertion of data in new node
*
* Return: size of list, or NULL if it fails
*/

/************************* Add node code ***********************/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

if (!new->n)

new->n = n;
new->next = *head;
*head = new;

return (new);
}
