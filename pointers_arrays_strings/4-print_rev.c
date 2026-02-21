#include "main.h"
/**
 *print_rev - entry
 *description: 'function that prints a string, in reverse'
 *@s: input
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	while (length > 0)
	{
	length--;
	_putchar(s[length]);
}
	_putchar('\n');
}
