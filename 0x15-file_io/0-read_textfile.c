#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: literaly, the file name
 * @letters: number of letters that should be read and printed
 *
 * Return: number of letters read and printed | 0 (failed)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buildStr;
	ssize_t bytesRD, bytesWR;
	int sourceFile = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (sourceFile == -1)
		return (0);

	buildStr = malloc(sizeof(char) * letters);
	if (buildStr == NULL)
		return (0);

	bytesRD = read(sourceFile, buildStr, letters);
	if (bytesRD == -1)
	{
		free(buildStr);
		close(sourceFile);
		return (0);
	}

	bytesWR = write(STDOUT_FILENO, buildStr, bytesRD);
	if (bytesWR != bytesRD)
	{
		free(buildStr);
		close(sourceFile);
		return (0);
	}

	free(buildStr);
	close(sourceFile);
	return (bytesWR);
}
