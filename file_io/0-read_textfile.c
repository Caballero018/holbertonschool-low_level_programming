#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * read_textfile - Function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: Parameter.
 * @letters: is the number of letters it should read and print.
 *
 * Return: Returns the actual number of letters it could
 * read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY), re;
	char *buffer;

	if (fd == -1)
		return (0);
	if (filename == NULL)
		return (0);
	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	re = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, re);

	close(fd);
	return (re);
}
