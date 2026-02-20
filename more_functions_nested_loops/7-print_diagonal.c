#include "main.h"
/**
 *print_diagonal - entry
 *description: 'function that draws a diagonal line on the terminal'
 *@n: input
*/
void print_diagonal(int n)
{
	int s, r;

	if (n <= 0)

	{
	_putchar('\n');
	}

	for (r = 0; r < n; r++)
	{
	for (s = 0; s < r; s++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
}
