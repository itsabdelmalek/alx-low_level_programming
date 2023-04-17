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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
