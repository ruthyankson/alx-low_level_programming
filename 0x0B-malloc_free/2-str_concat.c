#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *Return: newly concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 =  "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con_str = malloc(sizeof(char) * (i + j + 1));
	if (con_str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		con_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		con_str[i] = s2[j];
		i++;
		j++;
	}
	con_str[i] = '\0';
	return (con_str);
}
