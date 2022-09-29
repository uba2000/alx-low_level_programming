#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - check all number < n is divisible by n
 * @n: int
 * @resp: int
 * Return: int
 */

int is_prime(int n, int resp)
{
	if (resp >= n && n > 1)
	{
		return (1);
	}
	else if (n % resp == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, resp + 1));
	}
}
