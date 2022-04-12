#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 4)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a);
					_putchar(d);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++
			}
			b++;
		}
		a++;
	}
