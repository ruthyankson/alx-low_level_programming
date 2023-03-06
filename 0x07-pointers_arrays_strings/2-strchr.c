#include "main.h"
/**
 *_strchr - locates a character in a string.
 *@s: char array
 *@c: character to be found
 *Return: pointer to the found character or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			ptr = &s[i];
		else
			ptr = 0;
		break;
	}
	return (ptr);
}
