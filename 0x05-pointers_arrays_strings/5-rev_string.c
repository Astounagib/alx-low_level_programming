#include "main.h"
/**
 *rev_string - Reverse a string
 *@s: String to reverse
 *Return: Nothing
 */

void rev_string(char *s)
{
char s[10] = "main.h";

printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
return (0);
}
