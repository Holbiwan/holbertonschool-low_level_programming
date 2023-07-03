#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to evaluate
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	return((*s != '\0') ? (1 + _strlen_recursion(s + 1)) : (0));

}
