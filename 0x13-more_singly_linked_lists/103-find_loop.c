#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked list to search
 * Return: pointer of node where loop starts or returns, NULL if no loop
 */

/******************** Find the loop codes **************/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}

