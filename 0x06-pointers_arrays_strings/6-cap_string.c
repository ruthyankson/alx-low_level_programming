#include "main.h"
/**
 *cap_string - capitalizes all words of a string.
 *@a: array
 *Return: array
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((a[i] >= 'a' && a[i] <= 'z') &&
		    (!(a[i] == ' ' ||
		       a[i] == '\t' ||
		       a[i] == '\n' ||
		       a[i] == ',' ||
		       a[i] == ';' ||
		       a[i] == '.' ||
		       a[i] == '!' ||
		       a[i] == '?' ||
		       a[i] == '"' ||
		       a[i] == '(' ||
		       a[i] == ')' ||
		       a[i] == '{' ||
		       a[i] == '}' ||)))
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
