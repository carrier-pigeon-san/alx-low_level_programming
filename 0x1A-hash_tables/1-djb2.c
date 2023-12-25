#include "hash_tables.h"
/**
 * hash_djb2 - generates an index to store data based on a given key
 * @str: given key to hash
 *
 * Return: index of hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
