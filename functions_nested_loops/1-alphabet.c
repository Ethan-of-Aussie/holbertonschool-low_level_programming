#include "main.h"
#include <unistd.h>
/**
 * main-check the code
 * Return:0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
{
	_putchar(a);
	a++; }
	_putchar('\n');
}
