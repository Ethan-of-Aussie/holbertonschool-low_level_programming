#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - entry point
 *description: 'function that prints all natural numbers from n to 98'
 *@n: input
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
	printf("%d", n);
	n++;
	if (n <= 98)
	{
	printf(", ");
	}
	}


	putchar('\n');

}
