#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (len < accept && s[len] != '\0')
	{
	s[len] = accept[len];
	len++;
	}
	return (s);
}
