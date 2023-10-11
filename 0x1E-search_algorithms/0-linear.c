#include "search_algos.h"

/**
 * linear_search - Functionn to search for a value in an array
 * of integers and uses linear search algorithm
 * @array: a pointerr to first element of array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: first index OR -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int flag = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}
	if (flag != 1)
		return (-1);
	return (i);
}
