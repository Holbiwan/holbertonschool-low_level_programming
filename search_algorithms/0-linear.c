#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: function must return the index of 1st occurence. where value
 * If value is not found in the array or if array is NULL,
 * the function must return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
