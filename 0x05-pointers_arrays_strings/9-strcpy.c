#include "main.h"
/**
 *_strcpy - coping src, into the buffer pointed to by dest.
 *@dest: Destination
 *@src: Source
 *Return:
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *ret_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret_ptr);
}
