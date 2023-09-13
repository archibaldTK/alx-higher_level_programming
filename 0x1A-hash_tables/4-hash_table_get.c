#include "hash_tables.h"

/**
 * hash_table_get - retrieves data from a hash table
 * @ht: hash table where table will fetched from
 * @key: key of the value to the data to be fetched
 * Return: value of the matching key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!key || !ht || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
