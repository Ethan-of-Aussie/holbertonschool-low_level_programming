#include "main.h"
/**
 *puts_half - entry
 *description: 'function that prints half of a string'
 *@str: input
 */
void puts_half(char *str)
{
	int len = 0;
	int sta;

	while (str[len] != '\0')
	{
	len++;
	}
	sta = (len + 1) / 2;
	
	while (str[sta] != '\0')
	{
	_putchar(str[sta]);
	sta++;
	}
	_putchar('\n');
}
