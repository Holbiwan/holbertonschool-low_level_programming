#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: key value to check for index
 * @size: size of the array of the hash table
 *
 * Return: index where the key must be stored in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	hash_code = hash_djb2(key);
	return (hash_code % size);
}
