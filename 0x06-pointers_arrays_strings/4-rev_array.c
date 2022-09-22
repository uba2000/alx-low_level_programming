#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: int array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int half, i = 0;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
