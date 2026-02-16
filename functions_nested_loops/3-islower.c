#include <unistd.h>
#include "main.h"
/**
 *int _islower - entry point
 *return: 
 *description - weed out the none lowercase.
 */
int _islower(int c)
{
  if ((c) >= 'A' && (c) <= 'Z')
{
	c=0;
}
	if ((c)  >= 'a' && (c) <= 'z')
{
	c=1;
}
	return (c);
}
