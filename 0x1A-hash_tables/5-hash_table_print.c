#include "hash_tables.h"

/**
 * hash_table_print - prints a has table
 * @ht: Table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int flag = 0;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (flag == 1)
			printf(", ");
		flag = 1;
		ptr = ht->array[i];
		while (ptr)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			if (ptr)
				printf(", ");
		}

	}
	printf("}\n");
}
