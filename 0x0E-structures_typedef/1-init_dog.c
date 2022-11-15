#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * type dog
 * @d: A dog structure.
 * @name: The name of the dog.@age: The age of the dog.
 * @age: age of dog
 * @owner: The owner of the dog.
 *
 * Return: Nothing
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
