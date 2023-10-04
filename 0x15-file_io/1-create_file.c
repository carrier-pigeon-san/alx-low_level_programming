#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of new file
 * @text_content: NULL terminated string to be written to the new file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t txtlen, w_file;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (txtlen = 0; text_content[txtlen] != '\0'; txtlen++)
			;
		w_file = write(file_d, text_content, txtlen);
		if (w_file != txtlen)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
