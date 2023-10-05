#include "main.h"
void checkerr98(int file_from, char *av, char *buffer);
void checkerr99(int file_to, char *av, char *buffer);
void checkerr100(int fildes, char *buffer);

/**
 * main - copies content of a file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0(Success)
 */
int main(int ac, char **av)
{
	char *buildstr;
	int file_from, file_to;
	ssize_t r_src, w_dest;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buildstr = malloc(sizeof(char) * 1024);
	if (buildstr == NULL)
		return (-1);
	file_from = open(av[1], O_RDONLY);
	checkerr98(file_from, av[1], buildstr);
	/*
	* if (file_from == -1)
	* {
	*	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	*	exit(98);
	* }
	*/
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	checkerr99(file_to, av[2], buildstr);
	/*
	* if (file_to == -1)
	* {
	*	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	*	exit(99);
	* }
	*/
	while ((r_src = read(file_from, buildstr, 1024)) != '\0')
	{
		checkerr98(r_src, av[1], buildstr);
		/*
		* if (r_src == -1)
		* {
		*	close(file_from);
		*	free(buildstr);
		*	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		*	exit(98);
		* }
		*/
		w_dest = write(file_to, buildstr, r_src);
		checkerr99(w_dest, av[2], buildstr);
		/*
		* if (w_dest != r_src)
		* {
		*	close(file_to);
		*	free(buildstr);
		*	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		*	exit(99);
		* }
		*/
	}
	r_src = close(file_from);
	checkerr100(r_src, buildstr);
	/*
	* if (r_src < 0)
	* {
	*	free(buildstr);
	*	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	*	exit(100);
	* }
	*/
	w_dest = close(file_to);
	checkerr100(w_dest, buildstr);
	/*
	* if (w_dest < 0)
	* {
	*	free(buildstr);
	*	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	*	exit(100);
	* }
	*/

	free(buildstr);
	return (0);
}

/**
 * checkerr98 - checks if source file can be read
 * @file_from: file descriptor for source file
 * @av: name of file
 * @buffer: buffer
 *
 * Return: void
 */
void checkerr98(int file_from, char *av, char *buffer)
{
	if (file_from == -1)
	{
		close(file_from);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
}
/**
 * checkerr99 - checks if destination file can be written to
 * @file_to: file descriptor for destination file
 * @av: name of file
 * @buffer: buffer
 *
 * Return: void
 */
void checkerr99(int file_to, char *av, char *buffer)
{
	if (file_to == -1)
	{
		close(file_to);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		exit(98);
	}
}
/*
 * checkerr100 - check if file has closed
 * @fildes: file descriptor
 * @av: name of file
 * @buffer: buffer
 *
 * Return: void
 */
void checkerr100(int fildes, char *buffer)
{
	if (fildes < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
}
