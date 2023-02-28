#include "main.h"
/**
 *puts_half - prints the second half of a string, followed by a new line.
 *@str: char array parameter
 */
void puts_half(char *str)
{
	int i, n, length_s = _strlen(str);
	int odmid = (length_s - 1) / 2;
	int evmid = length_s / 2;

	if (length_s % 2 == 0)
		n = evmid;
	else
		n = odmid;
	for (i = n; i <= length_s; i++)
	{
		_putchar(str[i]);
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
