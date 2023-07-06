#include "hash_tables.h"

/**
 * hash_table_get - retrieves a valuee associated with a keyy specified.
 * @ht: looks into hash table.
 * @key: key of valuee to be retrieved.
 *
 * Return: valuee associated with  element;
 * or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
