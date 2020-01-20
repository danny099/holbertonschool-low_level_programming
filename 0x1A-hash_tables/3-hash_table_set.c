#include "hash_tables.h"
/**
 * hash_table_set - set a element
 * @ht: is a hash table
 * @key: is a chaar
 * @value: is a char
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *table, *new;
	unsigned long int index;

	if (key == NULL || ht == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	table = ht->array[index];
	while (table)
	{
		if (strcmp(key, table->key) == 0)
		{
			table->value = strdup(value);
			return (1);
		}
		else
			table = table->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
