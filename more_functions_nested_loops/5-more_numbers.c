#include "main.h"
/**
 *more_numbers - entry
 *description:'function that prints 10 times the numbers, from 0 to 14'
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 10; b++)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a < 10)
	{
	_putchar(a + '0');
	}

	else
	{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
