#include "main.h"
#include <stdio.h>
/**
 *print_array - entry
 *description: ' function that prints number elements of an array of integers'
 *@a: first input
 *@n: second input
 */
void print_array(int *a, int n)
{
	int len = 0;

	while (len < n)
	{
	printf("%d", a[len]);
	len++;
	if (len < n)
	printf(", ");
	}
printf("\n");
}
