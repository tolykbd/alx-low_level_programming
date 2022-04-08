#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	ch = 97;
	while (ch < 123)
	{
		if (ch != 113 && ch != 101)
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
