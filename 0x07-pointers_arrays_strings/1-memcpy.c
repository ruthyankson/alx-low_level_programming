#include "main.h"
/**
 *_memcpy - copies memory area.
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int mem = n;
	
	while (i < mem)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
