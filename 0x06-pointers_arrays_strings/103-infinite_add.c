#include "main.h"

/**
 * add_each_number - add all numbers in string
 * assuming all char in string are numbers
 * @s: string
 * Return: int
 */

int add_each_number(char *s)
{
	int sign = 1, resp, start;

	for (start = 0; s[start] <= 48 && s[start] >= 57; start++)
	{
		if (s[start] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = start; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * int_to_string - convert int to string
 * @n: int
 * Return: char *
 */

void *int_to_string(int *n)
{
	int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++)
	{
		divisor *= 10;
	}

	char str[i];

	for (int cmpt = 0; divisor >= 10; divisor /= 10, cmpt++)
	{
		resp = n / divisor;
		str[cmpt] = '0' + resp;
		n = n - resp * divisor;
	}
	str[i] = ('0' + n);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, a, b;
	
}
