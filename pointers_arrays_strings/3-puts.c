#include "main.h"
/**
 *_puts - entry
 *description: 'function that prints a string to stdout'
 *@str: input
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
