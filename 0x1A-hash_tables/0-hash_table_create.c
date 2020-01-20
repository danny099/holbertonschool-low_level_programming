#include "hash_tables.h"
/**
 * hash_table_create - create hast rable
 * @size: int size
 * Return: 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashTable = malloc(sizeof(hash_table_t) * 1);

	if (!hashTable)
	{
		free(hashTable);
		return (NULL);
	}
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		hashTable->array[i] = NULL;
	}
	hashTable->size = size;
	return (hashTable);
}
