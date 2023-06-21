#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that prints alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
