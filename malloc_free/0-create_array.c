#include "main.h"
#include <stdlib.h>

/**
 * create_array - create a chars array,initialize specific char
 * @size: The size of the array
 * @c: Char to initialize the array
 *
 * Return: pointer to the array (Sucess), NULL (error)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);

s = malloc(size * sizeof(char));

if (s == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
s[i] = c;
}

return (s);
}
