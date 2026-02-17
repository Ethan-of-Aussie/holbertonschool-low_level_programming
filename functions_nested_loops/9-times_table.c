#include "main.h"
/**
 *description:''
 *times_table - read code!
 *
 */

void times_table(void)
{
	int a;
	int c;
	int j;
	for (c = 0; c < 10; c++)
	  {
	for (j = 0; j < 10 ; j++)
	      {
	a = c * j;
	if (a < 10)
	  {
	_putchar(a + '0');
	_putchar(',');
        _putchar(' ');
	  }
          else
	  {
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(',');
        _putchar(' ');
	  }
	      }
	  
	_putchar('\n');	     
}
}	
