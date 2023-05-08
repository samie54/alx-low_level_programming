#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: const char type pointer to filename to be read
 * @letters: size_t type of numbers of letters printed
 *
 * Return: 0 is returned if failed, or numbers of letters printed
 */

/**************reads a textfile code ****************/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fpRead, fpWrite;
	char *lineBuffer;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	lineBuffer = malloc(sizeof(char) * (letters));
	if (!lineBuffer)
		return (0);

	fpRead = read(fp, lineBuffer, letters);
	fpWrite = write(STDOUT_FILENO, lineBuffer, fpRead);

	close(fp);

	free(lineBuffer);

	return (fpWrite);
}
