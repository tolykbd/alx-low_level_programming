#include "main.h"

/**
 * print_alphabet - prints a-z latters
 *
 */
void print_alphabet(void)
{
	int chr;

	chr = 97;
	while (chr < 123)
	{
		_putchar(chr);
		chr++;
	}
	_putchar('\n');

	return;
}
