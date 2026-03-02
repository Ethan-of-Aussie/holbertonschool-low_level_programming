#include <stdio.h>
/**
 *main - number of arguments to be passed
 *@argc:number of arguments
 *@argv:currently avoided
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
