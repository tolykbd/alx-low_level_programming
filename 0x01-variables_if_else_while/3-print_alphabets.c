#include <stdio.h>
/**
 * main - print a-z and A-Z
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	ch = 97;
	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	ch = 65;
	while (ch < 91)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
