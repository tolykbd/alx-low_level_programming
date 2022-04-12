#include "main.h"

/**
 * print_last_digit - prints the last digit of a numbe
 * @n: number to be checked for last digit
 * Return: value of last digit.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld <= 0)
	{
		ld = ld * -1;
		_putchar('-');
		_putchar(ld + '0');
	}
	else
		_putchar(ld + '0');

	return (ld);
}
