#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * Description: a struct representing a dog with a name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
