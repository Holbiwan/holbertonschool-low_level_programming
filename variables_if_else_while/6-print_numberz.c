#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Return: 0 (Sucess)
 */
int main(void)

{

int d;

for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');

return (0);

}
