#include "main.h"
/**
 *leet - entry
 *description: 'leet baby, leet!'
 *@str: input
 *Return: the leet switch
 */
char *leet(char *str)
{
	char le[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int a = 0;
	int A;

	while (str[a] != '\0')
		{
		A = 0;
		while (le[A] != '\0')
		{
		if (str[a] == le[A])
		{
		str[a] = n[A];
		break;
		}
		A++;
		}
		a++;
		}
	return (str);
}
