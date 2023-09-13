#include "hash_tables.h"

/**
 * key_index - generates the index from the key
 * @key: key to generate index from
 * @size: is the capacity fo the array
 * Return: index for the provided key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
