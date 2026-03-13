#include "function_pointers.h"
/**
 *int_index - searchs the amount of times the elements appears
 *
 *@array: holds the index
 *@size: the index count
 *@cmp: The function assumed by the address to the pointed, cmp
 *Return: -1 if nothing is of value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	return (-1);
}
