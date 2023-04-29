#include "lists.h"

/**
 * listint_len - determines length of linked list to print
 *@h: - pointer to first node
 *
 * Return: size of list
 */

/****************** List length ****************/
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}

return (i);
}

