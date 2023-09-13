#include "hash_tables.h"

/**
 *hash_table_set - inserts new item to hash table
 *@ht: hash table to be modified
 *@key: key of the new item
 *@value: value of the new item
 *Return: returns 1 if succesful and zero if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_item;
hash_node_t *tmp;
unsigned long int index;

new_item = malloc(sizeof(hash_node_t));
if (!new_item || !key || *key == '\0' || !ht || value == NULL)
{
free(new_item);
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
new_item->value = strdup(value);
new_item->next = NULL;
new_item->key = strdup(key);
if (!new_item->key || !new_item->value)
{
free(new_item->value);
free(new_item->key);
free(new_item);
return (0);
}
if (index >= ht->size)
{
free(new_item->value);
free(new_item->key);
free(new_item);
return (0);
}
if (ht->array[index] == NULL)
{
ht->array[index] = new_item;
}
else
{
tmp = ht->array[index];
new_item->next = tmp;
ht->array[index] = new_item;
}

return (1);
}
