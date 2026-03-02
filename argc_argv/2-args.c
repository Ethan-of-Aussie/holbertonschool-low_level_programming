#include <stdio.h>
/**
 *main - number of arguments to be passed
 *@argc:number of arguments
 *@argv:
 *Return: 0
 */
int main(int argc, char *argv[])
{
  int i;

for (i = 0; i < argc; i++) 
{
	printf("%s\n", argv[i]);
}
return (0);
}
