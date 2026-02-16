#include "main.h"
/**
 *_isalpha - check the code.
 *Desrciption: 'function that checks for alphabetic character'
 *@c:returns 1 if c is a letter, lowercase or uppercase Returns 0 otherwise
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c) >= 'A' && (c) <= 'z')
{
	c = 1;
}
	if ((c)  >= '!' && (c) <= '@')
{
	c = 0;
}
	return (c);
}
