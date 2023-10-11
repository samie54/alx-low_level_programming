#include "search_algos.h"

/**
  * advanced_binary_recursive - Recursively searches
  * @array: Pointerr of subarray
  * @left: Starts of index
  * @right: End of index
  * @value: Search value
  *
  * Return: The index of value; -1 if NULL
  */
int adv_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (adv_binary_recursive(array, left, i, value));
	return (adv_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - searches value in sorted array
  * @array: Poiinter to first elementt of array
  * @size: Size of array
  * @value: search value
  *
  * Return: First index of value; NULL if -1
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
