#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string
 *
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int newFile;
	ssize_t wr_file, textLen;

	if (filename == NULL)
		return (-1);

	newFile = open(filename, O_WRONLY | O_APPEND);
	if (newFile == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(newFile);
		return (1);
	}

	for (textLen = 0; text_content[textLen] != '\0'; textLen++)
		;

	wr_file = write(newFile, text_content, textLen);
	if (wr_file == -1)
	{
		close(newFile);
		return (-1);
	}
	close(newFile);
	return (1);
}
