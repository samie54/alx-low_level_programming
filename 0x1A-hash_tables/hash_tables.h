#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct hash_node_s - node for hash table.
 *
 * @key: key stringg.
 * unique key in the Hash table.
 * @value: value corresponding to key.
 * @next: pointerr to next node of list.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table for data structure.
 *
 * @size: size of array
 * @array: array of size.
 * Each cell of array is a pointerr to the firsst node of linked list;
 * hence Hash table uses chaining collision handlingg.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
char *hash_table_get(const hash_table_t *ht, const char *key);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_delete(hash_table_t *ht);
void hash_table_print(const hash_table_t *ht);

int check_key(hash_node_t *ht, const char *key);
void replace_value(hash_node_t **ht, const char *key, const char *value);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);
void free_list(hash_node_t *head);
void print_list(hash_node_t *h);

/**
 * struct shash_node_s - node of sorted hash table.
 *
 * @key: key stringg.
 * unique key in the Hash table.
 * @value: value corresponding to key.
 * @next: pointerr to next node of list.
 * @sprev: pointer to previous element of sorted linked list.
 * @snext: pointerr to next element of sorted linked list.
 */
typedef struct shash_node_s
{
	 char *key;
	 char *value;
	 struct shash_node_s *next;
	 struct shash_node_s *sprev;
	 struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - sorted hash table; data structure.
 *
 * @size: size of array.
 * @array: array of size @size.
 * Each apointer of cell of this array to first node oflinked list;
 * hence hash table uses chaining collision handlingg.
 * @shead: pointerr to first element of sorted linked list.
 * @stail: pointerr to last element of sorted linked list.
 */
typedef struct shash_table_s
{
	 unsigned long int size;
	 shash_node_t **array;
	 shash_node_t *shead;
	 shash_node_t *stail;
} shash_table_t;

int shash_table_set(shash_table_t *ht, const char *key, const char *value);
shash_table_t *shash_table_create(unsigned long int size);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_delete(shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);

int check_key_s(shash_node_t *ht, const char *key);
int replace_value_s(shash_node_t **ht, const char *key, const char *value);
shash_node_t *add_node_s(shash_node_t **head,
	const char *key, const char *value);
void insert_sort(shash_node_t *node, shash_table_t *ht);
void free_list_s(shash_node_t *head);

#endif
