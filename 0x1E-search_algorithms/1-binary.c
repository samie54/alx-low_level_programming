#include "search_algos.h"

/**
 * binary_search - Searches  value in sorted array of integers
 * uses Binary search algo.
 *
 * @array: Pointerr to first element of array to search
 *   sorts in ascending orderr.
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, L = 0;
	size_t R = size - 1;
	int m;

	if (array == NULL)
	{
		return (-1);
	}

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		m = L + (R - L) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			L = m + 1;
		}
		else
		{
			R = m - 1;
		}
	}
	return (-1);
}
