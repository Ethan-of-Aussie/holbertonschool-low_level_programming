#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-njfsjknfns
 *Returns:ajkfahfi
 */
int main(void)
{
int n;
int digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10; 
printf("Last digit of %d is %d ", n, digit);
if (digit > 5)
{
printf("and is greater than 5");
}
else if (digit == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}
 printf("\n");
return (0);
}
