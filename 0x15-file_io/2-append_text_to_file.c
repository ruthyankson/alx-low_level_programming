#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildesc, count, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	fildesc = open(filename, O_WRONLY | O_APPEND);
	count = write(fildesc, text_content, text_len);

	if (fildesc == -1 || count == -1)
		return (-1);

	close(fildesc);

	return (1);
}
