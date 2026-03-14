#include "variadic_functions.h"
/**
 *print_numbers - print numbers from parameters
 *
 *@separator: Takes on ',' from parameter
 *@n: Numbers in parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	int val;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		{
		val = va_arg(ap, int);
		printf("%d", val);
			if (separator && i < n - 1)
			printf("%s", separator);
		}
	printf("\n");
	va_end(ap);
}
