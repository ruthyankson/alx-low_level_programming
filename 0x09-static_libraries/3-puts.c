#include<stdio.h>
#include "main.h"
/**
 *_puts - writes the string s and a trailing newline to stdout.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i] + '0');
		i++;
	}
	putchar('\n');
}
