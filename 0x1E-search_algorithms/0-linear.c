#include <stdio.h>
#include "search_algos.h"

/**
 * Functionn to search for a value in an array
* of integers and uses linear search algorithm
* array - a pointerr to first element of array to search
* size - the number of elements in the array
* value - the value to search for
*
* Return: first index OR -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			break;
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (i);
}
