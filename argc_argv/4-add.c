#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers
 *@argc:number of arguments
 *@argv:strings that will convert later to int
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (0);
	}
	}
sum += atoi(argv[i]);
}
	printf("%d\n", sum);

return (0);
}
