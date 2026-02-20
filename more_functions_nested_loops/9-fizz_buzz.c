#include <stdio.h>
/**
 *main -entry
 *description:'fizzbuzz in hell...'
 *Return: 0
 */
int main(void)
{
	int scale = 0;

	while (scale <= 99)
	{
	scale++;
	if (scale % 3 == 0 && scale % 5 == 0)
	{
	printf("Fizzbuzz");
	}
	else if (scale % 3 == 0)
	{
	printf("Fizz");
	}
	else if (scale % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", scale);
	}
	if (scale < 100)
	printf(" ");
	}
printf("\n");
	return (0);
}
