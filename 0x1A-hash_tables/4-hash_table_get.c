#include "hash_tables.h"
/**
 * hash_table_get -  ger hast
 * @ht: is a hash_table_t
 * @key: is achar
 * Return:  0
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			return (new_node->value);
		}
		else
		    new_node = new_node->next;
	}
	return (NULL);
}
