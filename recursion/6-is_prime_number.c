#include "main.h"
/**
*is_prime_number_assist - hunt down the prime number
*@n: the input
*@i: test and guess
*
*Return: increment and stop when we have result
*/
int is_prime_number_assist(int n, int i)
{
	if (i * i > n)
	{
	return (1);
	}
	if (n % i == 0)
	{
	return (0);
	}
	return (is_prime_number_assist(n, i + 1));
}



/**
 *is_prime_number - produce the prime or not
 *@n: the input
 *
 *Return: Output the prime with 1 or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (is_prime_number_assist(n, 2));
}
