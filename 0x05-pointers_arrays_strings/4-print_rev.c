#include "main.h"
/**
* print_rev - prints reverse string
* @s: string to be reversed
* Return: nothing
*/
void print_rev(char *s)
{
	int c;

	c = 0;
	while (str[c] != 0)
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
