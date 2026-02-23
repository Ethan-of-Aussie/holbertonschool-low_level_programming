#include "main.h"
/**
 *_memset - entry
 *description: 'fills memory with constant bytes'
 *@s: memory
 *@b: constant byte
 *@n: fills the first bytes of the memory
 *Return: the output of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	((unsigned char *) s)[i] = b;
	}
	return (s);
}
