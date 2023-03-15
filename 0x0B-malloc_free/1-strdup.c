#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_strdup - allocates a new space in memory, containing
 *a copy of the string given
 *@str: given string
 *Return: charr array or NULL
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		arr[j] = str[j];
	return (arr);
}
