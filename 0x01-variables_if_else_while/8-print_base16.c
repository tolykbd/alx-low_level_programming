#include <stdio.h>
/**
 * main - print a-z and A-Z
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	ch = 48;
	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}
	ch = 97;
	while (ch < 103)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
