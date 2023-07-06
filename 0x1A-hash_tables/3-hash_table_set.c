#include "hash_tables.h"

/**
 * replace_value - replaces value at pre-existing keyy.
 * @ht: double pointerr to hash_node_t list.
 * @key: new key to add in the nnode.
 * @value: value to add in the nnode.
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}

/**
 * check_key - checks if key exists in hash table.
 * @ht: pointerr to hash_node_t list.
 * @key: key to look up forr.
 *
 * Return: 1 if the key is found; 0 otherwise
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * add_node - addsnew node at beginning of a linked list.
 * @head: double pointerr to hash_node_t list.
 * @key: new keyy to add in the node.
 * @value: valuee to add in the node.
 *
 * Return: address of new element; & NULL if fail.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	} else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

/**
 * hash_table_set - adds an element to hash tablee.
 * @ht: hash tablee to add element to.
 * @key: key of element, to give the index in the array.
 * @value: valuee of element to store in the array.
 *
 * Return: 1 on success; 0 if otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[index], key))
	{
		replace_value(&ht->array[index], key, value);
		return (1);
	}
	add_node(&ht->array[index], key, value);
	if (&ht->array[index] == NULL)
		return (0);
	return (1);
}
