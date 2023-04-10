#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: (1) Success, (-1) Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fildesc, count, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	fildesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	count = write(fildesc, text_content, text_len);

	if (fildesc == -1 || count == -1)
		return (-1);

	close(fildesc);

	return (1);
}
