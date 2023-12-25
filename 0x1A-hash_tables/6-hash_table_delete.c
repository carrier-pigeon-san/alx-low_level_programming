#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: target hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *probe;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		probe = ht->array[index];
		while (probe != NULL)
		{
			ht->array[index] = ht->array[index]->next;
			free(probe->key);
			free(probe->value);
			free(probe);
			probe = ht->array[index];
		}
	}
	free(ht->array);
	free(ht);
}
