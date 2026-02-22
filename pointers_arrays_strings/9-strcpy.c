#include "main.h"
/**
 *_strcpy - entry
 *description: 'function that copies the string'
 *@dest: first input
 *@src: second input
 *Return: Returns the copied elements in dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] >= '\0')
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
