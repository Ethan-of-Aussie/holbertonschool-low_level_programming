#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *
 *@
 *
 *Return:
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	unsigned int use;
	char *new;
	int k, k2;
  
	while (s1[i] != '\0')
	i++;
	while (s2[j] != '\0')
	j++;
	if (n >= j)
		use = j;
	else
		use = n;

	new = malloc(i + use + 1);
	if (!new)
		return (NULL);

	for (k = 0; k < i; k++)
		new[k] = s1[k];

	for (k2 = 0; k2 < use; k2++)
		new[i + k2] = s2[k2];
	new[i + use] = '\0';
	return (new);
}
