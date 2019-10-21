#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - init dog
 *
 *@d: is a struct
 *@name: is a name of the dog
 *@age: is a age of the dog
 *@owner: is a owner of the dog
 * Return:
 * On error.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
