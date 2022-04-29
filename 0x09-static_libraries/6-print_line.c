#include "main.h"

/**
 * print_line - prints line
 * @n: number of line to be printed
 */
void print_line(int n)
{
	char chr = '_';
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar(chr);
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
