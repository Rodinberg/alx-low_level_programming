#include <stdio.h>

/**
 * swap_int - Swap the value of two integers.
 * @a: The first integer tto the swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
