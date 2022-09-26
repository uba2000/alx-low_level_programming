#include "main.h"

/**
 * print_number - print int
 * @n: number
 * Return: void
 */

void print_number(int n)
{
	int divisor = 1, i, number;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / divisor > 9)
	{
		i++;
		divisor *= 10;
	}

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		number = n / divisor;
		_putchar('0' + number);
	}
}
