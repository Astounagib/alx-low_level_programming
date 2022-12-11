#include<stdio.h>

/**
 * main - printing a-z
 * Return: 0 (Success)
 */

int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i == 57)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
