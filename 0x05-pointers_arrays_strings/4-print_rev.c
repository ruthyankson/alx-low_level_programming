#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: char array parameter
 */
void print_rev(char *s)
{
	int length_s = 0;

	length_s = _strlen(s);
	while (length_s != 0)
	{
		_putchar(s[length_s]);
		length_s--;
	}
	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 *@s: string parameter
 *Return: string length as integer
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
