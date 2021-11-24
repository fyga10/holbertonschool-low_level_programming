#include "main.h"
/**
 * length - Measure the length of a string
 *
 * @str: The string whose length is needed
 *
 * Return: The length of the string (number of elements)
 */
int length(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i); i++)
		;

	return (i);
}
/**
 * create_file - Create a file object
 * @filename: file's name
 * @text_content: NULL
 * Return: !, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	written = write(fd, text_content, length(text_content));

	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
