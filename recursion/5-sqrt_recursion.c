#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input
 *_sqrt_assist - finding the square root
 */
int _sqrt_assist(int n, int i)
{
	if (i * i == n)
	{
	return (i);
	}
	if (i * i > n)
	{
	return (-1);
	}
	return (_sqrt_assist(n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_assist(n, 1));
}
