#include "main.h"

/**
 * print_diagonal - check the code
 * @n: number of diagonal line to be printed
 *
 */
void print_diagonal(int n);
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = i;
			while (j >= 0)
			{
				_putchar(' ');
				i--;
			}
			_putchar('/');
			_putchar('\n');
			i++
		}
	}
}
