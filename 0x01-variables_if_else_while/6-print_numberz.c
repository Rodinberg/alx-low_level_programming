#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'Print numbers of base 10 using putchar only'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
