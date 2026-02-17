#include "main.h"
/**
 *print_sign - check the code.
 *Desrciption: 'function that prints the sign of a number'
 *@n: is used for the input.
 * Return: Always 0.
 */
int print_sign(int n)
{
	if ((n) > 0)
{
	_putchar('+');
	return (1);
}
	else if ((n) == 0)
{
	_putchar('0');
	return (0);
}
	else if ((n) < 0)
{
	_putchar('-');
	return (-1);
}
return (0);
}
