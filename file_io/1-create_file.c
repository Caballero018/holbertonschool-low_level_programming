#include "main.h"

/**
 * create_file - Function that creates a file.
 *
 * @filename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *
 */
int create_file(const char *filename, char *text_content)
{
	int cre, i = 0, wr;

	if (cre == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[i])
			i++;

	cre = open(filename, O_RDWR, 0600);
	wr = write(cre, text_content, i);
	if (wr == -1)
		return (-1);
	close(cre);
	return (1);


}
