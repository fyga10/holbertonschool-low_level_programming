#include "main.h"
/**
 * length - Measure the length of a string
 * @str: The string whose length is needed
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
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
