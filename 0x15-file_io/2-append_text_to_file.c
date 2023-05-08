#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: const char pointer
 * @text_content: char pointer
 *
 * Return: 1 on success; -1 on failure
 */

/************append text code ****************/
int append_text_to_file(const char *filename, char *text_content)
{
int fpOpen, fpWrite, len = 0;

if (!filename)
	return (-1);

fpOpen = open(filename, O_WRONLY | O_APPEND);

if (fpOpen == -1)
{
	return (-1);
}

if (!text_content)
	text_content = "";

while (text_content[len] != '\0')
{
len++;
}

fpWrite = write(fpOpen, text_content, len);

if (fpWrite == -1)
	return (-1);

close(fpOpen);

	return (1);
}

