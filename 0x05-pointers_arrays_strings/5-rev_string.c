#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: char array parameter
 */
void rev_string(char *s)
{
	int i, length_s = _strlen(s);
	int mid = length_s / 2;
	char temp;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[length_s - i - 1];
		s[length_s - i - 1] = temp;
	}
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
