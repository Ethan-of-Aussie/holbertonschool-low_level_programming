#include "main.h"
/**
 *print_triangle -entry
*description: 'function that prints a triangle'
*@size: input
*/
void print_triangle(int size)
{
	int tail;
	int fol;
	int spa;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (tail = 0; tail < size; tail++)
	{
	for (spa = size - tail - 1; spa > 0; spa--)
	{
	_putchar(' ');
	}
	for (fol = 0; fol <= tail; fol++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
