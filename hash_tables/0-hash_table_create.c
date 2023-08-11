#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;

	if (size != 0)
	{
		h_t = malloc(sizeof(hash_table_t));
		if (!h_t)
		{
			return (NULL);
		}
		h_t->size = size;
		h_t->array = calloc(size, sizeof(h_t_node_t *));
			if (!h_t->array)
				return (NULL);
		return (h_t);
	}
	return (NULL);
}
