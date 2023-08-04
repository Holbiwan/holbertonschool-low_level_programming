#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointing to bit
 * @index: index to set the value at - indices start at 0.
 *
 * Return: 1 if succeed or -1 if there in an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

