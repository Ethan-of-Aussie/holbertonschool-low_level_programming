#include <unistd.h>
#include "main.h"
/**
 *_islower - Entry point
 *Return: c as 0 and 1 depending on lowercase c or not
 *@c: hopefully responds to 3-main.c or otherwise appear as 011
 *description: 'weed out none lowercase and appear them as 0 while c is 1'
 */
int _islower(int c)
{
	if ((c) >= 'A' && (c) <= 'Z')
{
	c = 0;
}
	if ((c)  >= 'a' && (c) <= 'z')
{
	c = 1;
}
	return (c);
}
