#include "hash_tables.h"

/**
 * hash_table_delete - deleltes a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *next;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			if (ptr)
			{
				while (ptr)
				{
					next = ptr->next;
					free(ptr->key);
					free(ptr->value);
					free(ptr);
					ptr = next;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
