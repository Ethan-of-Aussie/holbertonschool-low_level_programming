#include "main.h"
#include <stddef.h>
/**
 *_strstr - entry
 *description: 'function that locates a substring'
 *@haystack: finding the needle
 *@needle: the needle "world"
 *Return: NULL or the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	
	if (*needle == '\0')
	{
	return (haystack);
	}
	while (haystack[i] != '\0')
	{
	j = 0;
		while (needle[j] != '\0')
		{
		if (haystack[i + j] != needle[j])
		break;
		j++;
		}
		if (needle[j] == '\0')
		return (haystack + i);
		i++;
	}
	return (NULL);
}


