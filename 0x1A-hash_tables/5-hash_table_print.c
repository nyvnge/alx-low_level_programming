#include "hash_tables.h"

/**
 * hash_table_print - outputs a hash table.
 * @htbl: pointer to the hash table to output.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of hash table.
 */
void hash_table_print(const hash_table_t *htbl)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (htbl == NULL)
		return;

	printf("{");
	for (i = 0; i < htbl->size; i++)
	{
		if (htbl->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = htbl->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
