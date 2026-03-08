#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>
/**
 *_calloc -  allocates memory for an array
 *@nmemb: elements from an array
 *@size: bytes of the array
 *
 *Return: the output
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	size_t total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else if (nmemb > SIZE_MAX / size)
		return (NULL);
	else
		total = nmemb * size;

	a = malloc(total);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		a[i] = 0;

	return (a);
}
