#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absloute value of int
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
