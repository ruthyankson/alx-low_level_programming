#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fildesc;
	ssize_t count;
	ssize_t tc;

	fildesc = open(filename, O_RDONLY);
	if (fildesc == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tc = read(fildesc, buff, letters);
	count = write(STDOUT_FILENO, buff, tc);

	free(buff);
	close(fildesc);
	return (count);
}
