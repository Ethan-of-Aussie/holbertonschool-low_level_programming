#include "lists.h"
/**
 *
 *
 */
size_t print_list(const list_t *h)
{
	list_t *node = malloc(sizeof(list_t));
	int i = 0;

	if (!h->str)
	  {
	    printf("[0] (nil)\n");
	  }
	else
	  printf("[%u] %s\n", h->len, h->str);
	for (i = 0; len[i] < h; i++)
	  ;
	
	printf("[%d]", );
	return ();
}
