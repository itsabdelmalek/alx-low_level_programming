#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog variable
 * @d: pointer to the struct dog to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name != NULL ? d->name : "(nil)";
		float age = d->age;
		char *owner = d->owner != NULL ? d->owner : "(nil)";

		printf("Name: %s\n", name);
		printf("Age: %.6f\n", age);
		printf("Owner: %s\n", owner);
	}
}
