#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array with line arguments
 *
 * Return: 0, 1
 */

int main(int argc, char *argv[])

{
if (argc == 3)
{
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
