#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *str_concat - Time to concatenate
 *@s1: destination
 *@s2: the source copied
 *Return: the output
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j = 0;
	int len1, len2;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	{
	len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
	len2++;
	}
	s = malloc(len1 + len2 + 1);
	if (s == NULL)
	return (NULL);
		for (i = 0; i < len1; i++)
		{
		s[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
		s[len1 + j] = s2[j];
		}
	s[len1 + len2] = '\0';
	return (s);
}
