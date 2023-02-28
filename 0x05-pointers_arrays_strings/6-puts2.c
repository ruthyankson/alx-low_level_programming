#include "main.h"
/**
 *puts2 -  prints each character of a string, starting with the first
 *@str: char array parameter
 */
void puts2(char *str)
{
	int i, length_s = _strlen(str);

	for (i = 0; i <= length_s; i++)
	{
		if (i % 2 == 0)
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
