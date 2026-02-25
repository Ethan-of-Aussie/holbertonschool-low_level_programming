#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - entry
 *description 'searches a string for any of a set bytes'
 *@s: string of bytes
 *accept: what bytes to accept
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	const char *temp;
	
	if (s == NULL || accept == NULL)
	{
	return (NULL);
	}
	while (*s != '\0')
		{
		temp = accept;
		while (*temp != '\0')
			{
			if (*s == *temp)
			{
		return (char *) s;
		}
		temp++;
		}
	s++;
	}
	return (NULL);
}
