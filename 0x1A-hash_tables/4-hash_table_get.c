#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to be searched
 * @key: key to index to be searched
 *
 * Return: value or Null if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *probe;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		probe = ht->array[index];
		while (probe != NULL)
		{
			probe = probe->next;
			if (strcmp(probe->key, key) == 0)
				return (probe->value);
		}
	}
	return (NULL);
}
