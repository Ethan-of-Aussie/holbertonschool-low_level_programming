#include "main.h"
/**
 *cap_string - entry
 *description: 'capitalizes all words of a string'
 *@str: input
 *Return: output the input, cap the start of each word.
 */
char *cap_string(char *str)
{
	char *p = str;
	char seps[] = " \t\n,;.!?\"(){}";

	if (*p >= 'a' && *p <= 'z')
	{
		*p -= 32;
	}
	while (*p)
	{
	char *s = seps;
	while (*s)
	{
	if (*p == *s)
	{
		if (*(p + 1) >= 'a' && *(p + 1) <= 'z')
		*(p + 1) -= 32;
		break;
	}
	s++;
	}
	p++;
}
	return (str);
}
