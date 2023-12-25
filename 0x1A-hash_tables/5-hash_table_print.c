#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *probe;
	int delim = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		probe = ht->array[index];
		while (probe != NULL)
		{
			if (delim)
				printf(", ");
			printf("'%s': '%s'", probe->key, probe->value);
			delim = 1;
			probe = probe->next;
		}
	}
	printf("}\n");
}
