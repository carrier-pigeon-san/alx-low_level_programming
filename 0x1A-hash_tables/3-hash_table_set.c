#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table where value is to be added
 * @key: key which index is based on
 * @value: data associated with the key
 *
 * Return: 1(success)/0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *rec;

	rec = malloc(sizeof(hash_node_t));
	if (rec == NULL)
		return (0);
	rec->key = strdup(key);
	rec->value = strdup(value);
	rec->next = NULL;

	if (key == NULL || strlen(key) == 0)
	{
		free(rec);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		rec->next = ht->array[index];
		ht->array[index] = rec;
	}

	ht->array[index] = rec;

	return (1);
}
