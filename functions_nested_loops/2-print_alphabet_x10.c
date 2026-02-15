#include "main.h"
#include <unistd.h>
/**
 *print_alphabet_x10 - entry point
 *
 *Return: void
 *
 *description: DOING IT BY TEN!!!!
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while
	  (i <= 10)
{
	char a = 'a';

	while
	  (a <= 'z')
{
	_putchar(a);
	a++;
}
	_putchar('\n');
	i++;
}
}
