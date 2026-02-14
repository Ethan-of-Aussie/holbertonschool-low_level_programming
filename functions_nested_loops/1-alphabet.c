#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - entry point
 *
 * Description: This function prints the alphabet, in lowercase
 *
 * Return: void
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
