#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always void
 */
void times_table(void)
{
	int i, j, n1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n1 = i * j;
			if (n1 < 10)
			{
				_putchar('0' + n1);
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (n1 >= 10)
			{
				_putchar('0' + (n1 / 10));
				_putchar('0' + (n1 % 10));
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
