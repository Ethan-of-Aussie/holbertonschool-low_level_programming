#include "main.h"
/**
 *_isdigit - entry point
 *description: 'To find through 0 - 9 if correct, an number'
 *@c: input.
 *Return: input and number return.
 */

int _isdigit(int c)
{
	if ((c) >= '0' && (c) <= '9')
	{
	return (1);
	}
	return (0);
}
