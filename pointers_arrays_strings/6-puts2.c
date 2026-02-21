#include "main.h"
/**
 *puts2 - entry
 *description: 'function that prints every other character of a string'
 *@str: input
*/
void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
	_putchar(str[s]);
	if (str[s + 1] == '\0')
	{
	break;
	}
	s += 2;
	}
	_putchar('\n');
}
