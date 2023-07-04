#include "main.h"

/**
 * is_prime_number - returns 1 if integer is prime number, if not returns 0
 * @n: number to evaluate as a prime number
 *
 * Return: 1 if n is a prime number, 0 if is not
 */
int is_prime_number(int n)
{
if (n == 1 || n < 1)
return (0);

if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
return (0);

return (1);
}
