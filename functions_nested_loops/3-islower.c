#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
  * _islower - Function that checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 if c is lowercase character or 0 otherwise
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z' )
	{
		return (1);
	}

	return (0);
}
