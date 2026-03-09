#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 */
dog_t *dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->age = age;

	return (d);
}
