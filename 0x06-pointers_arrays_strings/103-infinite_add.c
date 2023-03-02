#include "main.h"
/**
 *infinite_add - adds two numbers
 *@n1: first number
 *@n2: second number
 *@r: buffer for storing the result
 *@size_r: buffer size
 *Return: buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
		i++;
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
