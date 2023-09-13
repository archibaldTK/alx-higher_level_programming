#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table from scratch
 * @size: is the size of the array in the new table
 * Return: memeory location of new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size  = size;
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
