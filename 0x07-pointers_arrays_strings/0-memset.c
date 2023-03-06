#include "main.h"
/**
 *_memset(char *s, char b, unsigned int n) - fills memory with a constant byte.
 *@s: pointer
 *@b: constant byte
 *@n: bytes of memory area
 *Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s)
}
