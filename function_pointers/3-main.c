#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - A functioning calculator
 *
 *@argc: Counts the amount of strings
 *@argv: Represents the array of strings
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	int (*mathf)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	mathf = get_op_func(argv[2]);

	if (!mathf)
	{
		printf("Error\n");
		exit(99);
	}
	res = mathf(num1, num2);
	printf("%d\n", res);
	return (0);
}
