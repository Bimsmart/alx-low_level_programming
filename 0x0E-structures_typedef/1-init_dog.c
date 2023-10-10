#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog
 * struct dog: a dog basic info
 * @d: pointer to struct
 * @name: name of the do
 * @age: how old
 * @owner: for who
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
