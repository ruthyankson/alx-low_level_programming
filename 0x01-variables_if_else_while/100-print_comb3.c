#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j = 49;
int space = 32;
int comma = 44;
while (i <= 56)
{
j = i + 1;
while (j <= 57)
{
putchar(i);
putchar(j);
if (!(i == 56 && j == 57))
{
putchar(comma);
putchar(space);
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
