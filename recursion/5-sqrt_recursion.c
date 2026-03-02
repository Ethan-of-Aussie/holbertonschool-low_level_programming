#include "main.h"
/**
 * _sqrt_assist - helper function to find natural square root
 * @n: number to compute the square root
 * @i: current guess
 *
 * Return: the natural square root, or -1 if none exists
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
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute the square root
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_assist(n, 1));
}
