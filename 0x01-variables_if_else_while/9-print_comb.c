#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int n = 48;
int space = 32;
int comma = 44;
while (n <= 57)
{
putchar(n);
putchar(comma);
putchar(space);
n++;
}
putchar('\n');
return (0);
}
