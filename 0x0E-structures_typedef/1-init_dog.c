#include "dog.h"

/**
 * init_dog - initializes a struct dog variable
 * @d: pointer to the struct dog to initialize
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the name of the dog's owner
 *
 * Return: void
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
