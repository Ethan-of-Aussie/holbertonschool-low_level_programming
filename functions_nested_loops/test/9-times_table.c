#include "main.h"
/**
 *description:''
 *times_table - read code!
 *
 */

void times_table(void)
{
	const char *str = ", ";
	int p = 0;
	int a;
	int c;
	int j;
	p = ", ";
	for (c = 0; c < 10; c++)
	  {
	for (j = 0; j <  10; j++)
	      {
	a = c * j;
	if (a < 10)
	  {
	_putchar(a + '0');
	_putchar(p);       
	  }
          else
	  {
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(p);
	  }
	      }
	  
	_putchar('\n');	     
}
}	
