#include "main.h"

/**
 * print_alphabet_x10 - prints a-z latters
 */
void print_alphabet_x10(void)
{
	int n;

	n = 0;
	while (n < 10)
	{

	int chr;

	chr = 97;
	while (chr < 123)
	{
		_putchar(chr);
		chr++;
	}
	_putchar('\n');
	n++;
	}

}
