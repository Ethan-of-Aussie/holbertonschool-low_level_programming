#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - allocating enough memory of input b
 *@b: memory to be allocated
 *
 *Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (!a)
	exit(98);

	return (a);
}
