#include "main.h"
/**
 *rot13 - encodes a string using rot13.
 *@a: array
 *Return: pointer to array
 */
char *rot13(char *)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char val[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = alpha[j];
				break;
			}
		}
	}
	return (a);
}
