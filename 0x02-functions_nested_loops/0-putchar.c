#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	/* Prints '_putchar' */
	int arr_char[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i = 0, arr_len = sizeof(arr_char) / sizeof(arr_char[0]);

	while (arr_len > 0)
	{
		putchar(arr_char[i]);
		i++;
		arr_len--;
	}
	putchar('\n');
	return (0);
}
