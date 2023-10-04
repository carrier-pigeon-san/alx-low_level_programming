#include "main.h"
/**
 * read_textfile - reads a text file and prints it in the POSIX standard output
 * @filename: name of file
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;
	char *buildstr;
	ssize_t r_file, w_file;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);

	buildstr = malloc(sizeof(char) * letters);
	if (buildstr == NULL)
		return (0);

	r_file = read(filedesc, buildstr, letters);
	if (r_file == -1)
	{
		close(filedesc);
		free(buildstr);
		return (0);
	}

	w_file = write(STDOUT_FILENO, buildstr, r_file);
	if (w_file != r_file)
	{
		close(filedesc);
		free(buildstr);
		return (0);
	}

	close(filedesc);
	free(buildstr);
	return (w_file);
}
