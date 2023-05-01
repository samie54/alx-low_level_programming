#include "lists.h"

/**
 * sum_listint - calculates sum of all data in listint_t list
 * @head: pointer to first node in the linked list
 *
 * Return: result sum
 */

/************************ Sum list code ***********************/
int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
