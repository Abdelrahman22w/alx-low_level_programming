#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function to free the stored values of dog
 * @d: a pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
