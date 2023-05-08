#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fp);

/**
 * create_buffer - Allocates 1024 bytes of buffer.
 * @file: The name of the file buffer storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer address.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content of file to another
 *
 * @argc: number of arguments
 *
 * @argv: arguments vector
 *
 * Return: Copy of file, or Always 0
 */

/************ program that copies code ******************/

int main(int argc, char *argv[])
{
int file_from, file_to, filecheck, w;
char *linebuffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

linebuffer = create_buffer(argv[2]);
file_from = open(argv[1], O_RDONLY);
filecheck = read(file_from, linebuffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (file_from == -1 || filecheck == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(linebuffer);
exit(98);
}

w = write(file_to, linebuffer, filecheck);
if (file_to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(linebuffer);
exit(99);
}

filecheck = read(file_from, linebuffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (filecheck > 0);

free(linebuffer);
close_file(file_from);
close_file(file_to);

return (0);
}
