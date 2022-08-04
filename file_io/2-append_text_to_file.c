#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 *
 * @filename: Is the name of the file.
 * @text_content: Is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[i])
			i++;

	ap = open(filename, O_WRONLY | O_APPEND);
	wr = write(ap, text_content, i);

	if (ap == -1 || wr == -1)
		return (-1);

	close(ap);
	return (1);



}
