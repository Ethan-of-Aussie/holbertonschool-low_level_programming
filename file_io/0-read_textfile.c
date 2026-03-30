#include "main.h"
/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters);
	ssize_t r, w;

  if (!filename)
    return (0);
  for (i = 0; i < letters; i++)
    write (1, &i, 1);
    
  return ();
}
