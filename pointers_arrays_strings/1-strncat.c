#include "main.h"
/**
 *_strncat - entry
 *description: 'concatenates multiple strings, uses n's bytes from src'
 *@dest: where the copied elements go
 *@src: elements to be copied
 *@n: bytes of numbers
 *Return: the inputs output
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (a < n && src[a] != '\0')
	{
	dest[i] = src[a];
	a++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
