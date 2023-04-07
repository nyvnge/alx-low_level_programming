#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated with
 *                  a key in hash table.
 * @htbl: pointer to the hash table.
 * @key: key to get the value of.
 *
 * Return: key mismatch - NULL.
 *         Otherwise - value associated with key in htbl.
 */
char *hash_table_get(const hash_table_t *htbl, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (htbl == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, htbl->size);
	if (index >= htbl->size)
		return (NULL);

	node = htbl->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
