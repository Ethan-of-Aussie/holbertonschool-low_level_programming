#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Freeeeeeeeee dog yeaaa yea!
 *@d: time to go free buddy. i'll miss you
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
