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
	int p = 0;
	for (c = 0; c <= 9; c++)
	  {
	for (j = 0; j <= 9; j++)
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
	while (p < 1)
	  {
	_putchar((a / 10) + '0');
        _putchar((a % 10) + '0');
	p++;
	  }
	
	_putchar('\n');	     
	;
	  }
}	
