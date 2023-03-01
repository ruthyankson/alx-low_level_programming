#include "main.h"
/**
 *char *_strcpy - coping src, into the buffer pointed to by dest.
 *@dest: Destination
 *@src: Source
 *Return:
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return (NULL);
	else
	{
		int i = 0;
		char ret_ptr = dest;

		while (*source <= '\0')
		{
			*dest = *src;
			dest++;
			source++
		}
		*dest = '\0';
		return (ret_ptr);
	}
}
