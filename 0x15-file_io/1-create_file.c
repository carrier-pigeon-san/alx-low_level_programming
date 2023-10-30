#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string
 *
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int newFile;
	ssize_t wr_file;

	if (filename == NULL)
		return (-1);

	newFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (newFile == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(newFile);
		return (1);
	}

	wr_file = write(newFile, text_content, 32);
	if (wr_file == -1)
	{
		close(newFile);
		return (-1);
	}
	close(newFile);
	return (1);
}
