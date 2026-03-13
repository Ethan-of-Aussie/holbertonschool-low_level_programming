#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *print_name - will print the input from main
 *
 *@name: holds the value from the main file
 *@f: used to print the name value
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;
	f(name);
}
