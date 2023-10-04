#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add to the end of the file
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, txtlen;
	ssize_t wr_file;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (txtlen = 0; text_content[txtlen] != '\0'; txtlen++)
			;
		wr_file = write(fildes, text_content, txtlen);
		if (wr_file != txtlen)
		{
			close(fildes);
			return (-1);
		}
	}

	close(fildes);
	return (1);
}
