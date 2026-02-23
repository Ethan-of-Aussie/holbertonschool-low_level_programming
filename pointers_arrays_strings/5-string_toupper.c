#include "main.h"
/**
 *string_toupper - entry
 *description: 'change lowercases to uppercase'
 *@str: input
 *Return: output str
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
		str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
