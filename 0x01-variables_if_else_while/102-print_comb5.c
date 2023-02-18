#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 48, j, k, l, space = 32, comma = 44;
while (i <= 57)
{
j = 48;
while (j <= 57)
{
k = i;
while (k <= 57)
{
if (k == 48)
l = j;
else
l = 48;
while (l <= 57)
{
if (!((i == k && j == l) || (k == 48 && l == 48) || (i == 57 && j == 57)))
{
putchar(i);
putchar(j);
putchar(space);
putchar(k);
putchar(l);
if (!(i == 57 && j == 56 && k == 57 && l == 57))
{
putchar(comma);
putchar(space);
}
}
l++;
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
