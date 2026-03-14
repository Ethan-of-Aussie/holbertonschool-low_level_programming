#include "variadic_functions.h"
/**
 *print_all - print any byte type
 *
 *@format: The parameters
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		printf("%s%c", sep, va_arg(ap, int));
		break;

		case 'i':
		printf("%s%d", sep, va_arg(ap, int));
		break;

		case 'f':
		printf("%s%f", sep, va_arg(ap, double));
		break;

		case 's':
		str = va_arg(ap, char *);
			if (!str)
			str = "(nil)";
		printf("%s%s", sep, str);
		break;

			default:
			i++;
		continue;
		}
		sep = ", ";
		i++;
		}
	va_end(ap);
	printf("\n");
}
