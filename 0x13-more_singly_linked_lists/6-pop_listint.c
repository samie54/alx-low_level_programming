#include "lists.h"

/**
 * pop_listint - removes head node of linked list
 * @head: point to head node in the linked list
 *
 * Return: deleted data inside elements
 * NULL if list is empty
 */
/*********************** pop codes ********************/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
