#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program prints lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
