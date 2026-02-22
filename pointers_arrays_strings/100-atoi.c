#include "main.h"
/**
 *_atoi - entry
 *description: 'function that convert a string to an integer'
 *@s: input
 *Return: the number and its possible left over sign
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int signs = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
	signs = -signs;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	n = n * 10 + (s[i] - '0');
	i++;
	if (n <= -2147483648)
	break;
	}
	return (n * signs);
}
