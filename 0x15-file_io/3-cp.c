#include "main.h"
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 (Success).
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int src_file, dest_file, fildesc, count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_file_buffer(argv[2]);
	src_file = open(argv[1], O_RDONLY);
	fildesc = read(src_file, buffer, 1024);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (src_file == -1 || fildesc == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read src_file file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		count = write(dest_file, buffer, fildesc);
		if (dest_file == -1 || count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write dest_file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		fildesc = read(src_file, buffer, 1024);
		dest_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (fildesc > 0);
	free(buffer);
	close_file(src_file);
	close_file(dest_file);
	return (0);
}

/**
 * create_file_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_file_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fildesc: The file descriptor to be closed.
 */
void close_file(int fildesc)
{
	int cf;

	cf = close(fildesc);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fildesc %d\n", fildesc);
		exit(100);
	}
}
