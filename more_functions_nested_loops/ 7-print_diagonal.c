#include "main.h"
/**
 *print_line -entry
 *description: 'function that draws a straight line in the terminal'
 *@n: input
 */
void print_line(int n)
{
	while (n > 0)
	{
	_putchar('_');
	n--;
	}
	_putchar('\n');
}
