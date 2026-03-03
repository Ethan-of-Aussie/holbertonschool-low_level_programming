#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *_strdup - point to new allocated space with the copied contents of str
 *@str: input
 *Return: the output
 */
char *_strdup(char *str)
{
	char *s;
	int len1;
	int len2;

	if (str == 0)
	{
	return (NULL);
	}

	for (len1 = 0; str[len1] != '\0'; len1++)
	;
	s = malloc(len1 + 1);


	if (s == NULL)
	{
	return (NULL);
	}

	for (len2 = 0; len2 < len1; len2++)
	{
	s[len2] = str[len2];
	}

	s[len1] = '\0';
	return (s);
}
