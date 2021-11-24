#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * @filename: file's name
 * @letters: number of letters to read
 * Return: 0 if cant´n open or read, actual numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
	ssize_t chars_readed, chars_written;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	chars_readed = read(fd, buf, letters);
	if (chars_readed == -1)
	{
		free(buf);
		return (0);
	}

	chars_written = write(STDOUT_FILENO, buf, chars_readed);

	free(buf);
	close(fd);

	return (chars_written);
}
