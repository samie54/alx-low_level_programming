#include "hash_tables.h"

/**
 * key_index - provides index of key in hash table.
 * @key: key to find index of.
 * @size: size of array of indexes.
 *
 * Return: index at which key valuee pairs;
 * should be stored in array of hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
