#include "main.h"
/**
 *_strcat - entry
 *descritpion: 'concatenate multiple strings together'
 *@dest: copy elements from src to
 *@src: elements to send to dest
 *Return: the inputs
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int t = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[t] != '\0')
	{
	dest[i] = src[t];
	i++;
	t++;
	}
	dest[i] = '\0';
	return (dest);
}
