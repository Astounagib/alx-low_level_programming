#include<stdio.h>
/**
 * main - printing a-z
 * Return: 0 (Success)
 */

int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
