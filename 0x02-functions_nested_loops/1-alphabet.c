#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints a-z latters
 *
 * Return: void;
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
