#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int n = 48;
while (n <= 57)
{
putchar(n);
n++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
