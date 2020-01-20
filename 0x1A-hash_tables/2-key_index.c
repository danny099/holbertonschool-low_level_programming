#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is a char
 * @size: is a int
 * Return: 0
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashTable, index;

	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);
	hashTable = hash_djb2(key);
	index = hashTable % size;
	return (index);
}
