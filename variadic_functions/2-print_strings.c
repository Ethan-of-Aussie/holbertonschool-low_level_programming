#include "variadic_functions.h"
/**
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  unsigned int i;

	va_list ap;
	int str;
	
	va_start(ap, n);

	for (i = 0; i < n; i++)
	  {
	    str = va_arg(ap, int);
	    
	  }
	va_end();
	printf("\n");
}
