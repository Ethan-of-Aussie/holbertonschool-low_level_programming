#include "variadic_functions.h"
/**
 *print_strings - I'll be Printing strings
 *
 *@separator: Takes on ','
 *@n: Takes on the string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(ap, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
