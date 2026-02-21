#include "main.h"
/**
 *rev_string - entry
 *description: 'function that reverses a string'
 *@s: input
 */
void rev_string(char *s)
{
	int j = 0, a = 0;
	char temp;

	while (s[j] != '\0')
	{
	j++;
	}
	j--;
	while (a < j)
	{
	temp = s[a];
	s[a] = s[j];
	s[j] = temp;
	a++;
	j--;
	}
}
