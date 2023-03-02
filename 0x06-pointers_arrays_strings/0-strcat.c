#include "main.h"
/**
 *_strcat - concatenates two strings.
 *@src: source string
 *@dest: destination string
 *Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	i = 0;
	while (src[i] != '\0')
	{
		_putchar(src[i]);
		i++;
	}
	_putchar(32);
	i = 0;
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}
	return ('\n');
}
