#include "main.h"
/**
 *_memcpy - entry
 *description: ' function that copies memory area'
 *@dest: output
 *@src: items to be copied
 *@n: bytes from memory area src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
	dest[i] = src[i];
	i++;
	}

return (dest);
}
