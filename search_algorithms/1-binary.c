#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to be searched
 * @size: The numebr of elements in the array
 * @value: the value to be searched for
 *
 * Return: The index where the value is located in
 * If value is not found in array or if array is NULL,
 * The function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (m = l; m < r; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = (l + r) / 2;

		if (value == array[m])
			return (m);
		if (value < array[m])
			r = m - 1;
		if (value > array[m])
			l = m + 1;
	}
	return (-1);
}
