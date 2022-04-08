#include <stdio.h>
/**
 * main - putchar all single digit numbers of base 10 starting from 0
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
