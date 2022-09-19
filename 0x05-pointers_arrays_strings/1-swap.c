#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first pointer paramenter
 * @b: second pointer parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *b;
	*b = *a;
	*a = r;
}
