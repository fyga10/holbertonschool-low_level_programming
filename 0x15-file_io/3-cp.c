#include "main.h"
/**
 * function_cp - progam that copies.
 * @file_to: Check arguments.
 * @file_from: String arguments.
 * Return: Void.
 */
void function_cp(const char *file_to, const char *file_from)
{
	int s, dest, f_r;
	char buf[1024];

	s = open(file_from, O_RDONLY);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((f_r = read(s, buf, 1024)) > 0)
	{
		if (write(dest, buf, f_r) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (f_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close(s);
	close(dest);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s);
		exit(100);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
}

/**
 * main - check the numbers of argument.
 * @argc: numbers of argument.
 * @argv: arguments
 * Return: 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	function_cp(argv[1], argv[2]);
	return (0);
}
