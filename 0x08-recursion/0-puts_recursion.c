#include "main.h"

/**
 *_puts_recursion - print a string with recursion
 *@s: string that we need to print
 *
 *Return: no return
 */

void _puts_recursion(char *s)
{
if (s[0] == '\0')
{
_putchar('\n');
return;
}

_putchar(s[0]);
_puts_recursion(s + 1);
}
