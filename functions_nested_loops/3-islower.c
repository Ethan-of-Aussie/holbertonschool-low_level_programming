#include <unistd.h>
#include "main.h"
/**
 *int _islower - entry point
 *return: 0
 *description - weed out the none lowercase.
 */
int _islower(int c)
{
	c = 'a';
	while (c <= 'c');
{
	c++;
}
	while ('c' != 0)
	  {
	write(1, &c, 1);
	  }
return (0);
}
