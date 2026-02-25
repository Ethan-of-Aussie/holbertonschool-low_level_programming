#include "main.h"
/**
 *_strspn - entry
 *description: 'return initial segment of byte of s of byte from accept'
 *@s: intial segment of bytes
 *@accept: bytes that s will consist of
 *Return: the output
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, j;

	while (s[len] != '\0')
	{
	j = 0;
		while (accept[j] != '\0')
			{
			if (s[len] == accept[j])
			break;
			j++;
			}
		if (accept[j] == '\0')
		return (len);
		len++;
	}
	return (len);
}
