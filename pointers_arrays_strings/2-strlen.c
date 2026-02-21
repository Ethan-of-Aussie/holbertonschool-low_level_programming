#include "main.h"
/**
 *_strlen - entry
 *description: 'function that returns the length of a string'
 *@s: input
 *Return: input answer
*/
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
	a++;
	}
	return (a);
}
