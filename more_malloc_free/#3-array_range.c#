#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>
/**
 *array_range - creates an array of integers
 *@min: minumim input
 *@max: maximum input
 *
 *Return: the new array output
 */
int *array_range(int min, int max)
{
	int len;
	int *a;
	int i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(len * sizeof(int));
	if (!a)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min + i;
	return (a);
}
