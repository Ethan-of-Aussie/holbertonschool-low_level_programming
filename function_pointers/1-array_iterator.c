#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 *array_iterator - will print out elements of the array.
 *
 *@array: contents of the array
 *@size: each index of the array
 *@action: will assume the function that addresses this function point
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	action(array[i]);
}
