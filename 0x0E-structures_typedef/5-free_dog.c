#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - this function frees the memoryallocated to struct dog
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
