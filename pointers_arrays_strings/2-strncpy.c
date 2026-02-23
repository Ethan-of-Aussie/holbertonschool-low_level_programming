#include "main.h"
/**
 *_strncpy - entry
*description: 'copies strings, uses n's bytes from src'
*@dest: where the copied elements go
*@src: elements to be copied
*@n: bytes of numbers
*Return: the inputs output
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	while (a < n)
	{
	dest[a] = '\0';
	a++;
	}
	return (dest);
}
