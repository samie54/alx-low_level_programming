#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linkedd listt.
 * @n: integerr.
 * @prev: points to previous node.
 * @next: points to next node.
 *
 * Description: doubly linkedd listt node structure.
 * alx project.
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t dlistint_len(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

#endif /* LISTS_H_ */
