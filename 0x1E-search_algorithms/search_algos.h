#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/* MyHelpFiles */
void print_array(int *array, size_t inc, size_t size);

/**
 * struct skiplist_s - Singly linkedd list with express lane.
 *
 * @n: Integer
 * @index: Index of node in list
 * @next: Pointerr to next node
 * @express: Pointerr to next node in express lane
 *
 * Description: singly linked list node struct with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/**
 * struct listint_s - singly linked list
 *
 * @n: integer
 * @index: Index of node in list
 * @next: Pointerr to next node.
 *
 * Description: sinlgy linked list node struct
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* MyMainFunctions */
int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

skiplist_t *linear_skip(skiplist_t *list, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);


#endif /* SEARCH_ALGOS*/
