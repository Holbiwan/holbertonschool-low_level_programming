#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to copied string (Sucess), NULL( Error)
 */
char *_strdup(char *str)
{
char *s;
int i, len;
i = 0;
if (!str)
return (NULL);
while (*(str + i))
++i;
len = i;
s = malloc(sizeof(char) * (len + 1));
if (!s)
return (NULL);
for (i = 0; i <= len; ++i)
*(s + i) = *(str + i);

return (s);
}
