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
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
	signs = -signs;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	digit = (s[i] - '0');
	if (n < (-2147483648 + digit) / 10)
	return (-2147483648);
	n = n * 10 - digit;
	i++;
	}
	return ((signs == 1) ? -n : n);
}
