#include "main.h"
/**
 *_strstr - locates a substring.
 *@haystack: string
 *@needle: substring
 *Return: pointer to the beginning of the found substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *s = haystack;
		char *p = needle;

		while (*s == *p && *p != '\0')
		{
			s++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
