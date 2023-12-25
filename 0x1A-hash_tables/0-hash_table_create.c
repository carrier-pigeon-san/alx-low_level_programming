#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table/NULL if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int size_count;
	hash_table_t *mesa;

	mesa = malloc(sizeof(hash_table_t));
	if (mesa == NULL)
		return (NULL);
	mesa->size = size;

	mesa->array = malloc(sizeof(hash_node_t *) * size);
	if (mesa->array == NULL)
		return (NULL);

	for (size_count = 0; size_count < size; size_count++)
		mesa->array[size_count] = NULL;
	return (mesa);
}
