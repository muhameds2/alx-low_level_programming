#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always void
 */
void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2 && y == 9)
		{
			continue;
		}
		for (j = 0; j <= 3; j++)
		{
			for (x = 0 ; x <= 6; x++)
			{
				if (x == 6)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + x);
					_putchar('0');
					_putchar('\n');
					continue;
				}
				for (y = 0; y < 10; y++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + x);
					_putchar('0' + y);
					_putchar('\n');
				}
			}
		}
	}
}
