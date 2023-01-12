#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
        char *nstr;
        unsigned int len, i;

        /* check is str is null */
        if (str == NULL)
        {
                return (NULL);
        }

        len = 0;
        while (str[len] != '\0')
        {
                len++;
        }

