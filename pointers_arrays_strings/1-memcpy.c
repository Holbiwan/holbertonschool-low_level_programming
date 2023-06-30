#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: input
 * Return: Always 0 (Sucess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
