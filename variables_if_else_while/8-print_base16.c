#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program prints all numbers of base 16 inlowercase
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar (c);
	putchar('\n');

	return (0);

}
