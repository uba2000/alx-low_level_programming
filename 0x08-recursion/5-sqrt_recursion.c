#include "main.h"

/**
 * _sqrt_recursion - Find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square_root(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square_root(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
