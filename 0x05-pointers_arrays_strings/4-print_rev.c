#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: char array parameter
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
