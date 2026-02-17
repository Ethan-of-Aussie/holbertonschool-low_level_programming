#include "main.h"
/**
 *_abs - check the code.
 *Desrciption: 'function that prints the last digit of a number.'
 *@c: is used for the input.
 * Return: n produces the last digit after c %.
 */
int print_last_digit(int c)
{
	int n = c % 10;

	if (n < 0)
	n = -n;
	_putchar('0' + n);
	return (n);
}
