#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: memory size to print
 *
 * Return: Pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *str;
unsigned int i;

if (!nmemb || !size)
return (NULL);
str = malloc(size * nmemb);
if (!str)
return (NULL);
for (i = 0; i < size * nmemb; ++i)
*(str + i) = 0;

return (str);
}
