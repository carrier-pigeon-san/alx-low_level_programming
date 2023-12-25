#include "hash_tables.h"
/**
 * key_index - generates the index of a given key
 * @key: string key off of which index is generated
 * @size: size of array of hash table
 *
 * Return: index at which key/value pair  should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
