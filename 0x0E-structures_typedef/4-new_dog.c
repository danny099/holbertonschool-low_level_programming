#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - return de lenght of a string
 *
 *@s: is a pointer
 * Return: On succes lenght oa a string.
 * On error.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}

/**
 * *new_dog - create a new dog
 * @name: is a pinter
 * @age: is a float
 * @owner: is a char
 * Return:
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameSize, ownerSize, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t) + 1);
	if (dog == NULL)
	{
		return (NULL);
	}
	nameSize = _strlen(name);
	dog->name = malloc(nameSize * sizeof(char) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nameSize + 1; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	ownerSize = _strlen(owner);
	dog->owner = malloc(ownerSize * sizeof(char) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerSize + 1; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
