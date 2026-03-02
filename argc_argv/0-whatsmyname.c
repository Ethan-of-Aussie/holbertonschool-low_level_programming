#include "main.h"
#include <stdio.h>
/**
 *main - to print its own name even after changing filename
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
