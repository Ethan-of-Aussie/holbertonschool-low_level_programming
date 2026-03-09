#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
*dog - struct with name, age, owner variables
*@name: exemple, Poppy.
*@age: exemple, 3 years old.
*@owner:exemple, Poppy's owners name is daryl
*Return: The output of the struct. Name, Age, Owner.
 */
typedef struct dog dog_t;
dog_t *dog(char *name, float age, char *owner)
{
	struct dog *d;
	int nlen, i;
	int olen = 0;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->age = age;

	for (nlen = 0; name[nlen] != '\0'; nlen++)
		;
	d->name = malloc(nlen + 1);
	if(!d->name)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (; olen != '\0'; olen++)
		;
	d->owner = malloc(olen + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	return (d);
}
