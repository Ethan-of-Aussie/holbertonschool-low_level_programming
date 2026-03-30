#include "main.h"
/**
 *create_file - Create file and write into it
 *
 *@filename: Name of file
 *@text_content: String to write
 *Return: Success or failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int w;
	
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	
	while (text_content[i] != '\0')
	i++;

	w = write(fd, text_content, i);

	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
