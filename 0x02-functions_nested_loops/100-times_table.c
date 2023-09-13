#include "main.h"
/**
 * print_times_table - function that prints the n times table
 * starting with zero
 * @n: integer to stop when reach
 *
 * Return: Always void
 */
void print_times_table(int n)
{
	int row, column, mul;

	if (!(n > 15 || n < 0))
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; coulmn <= n; column++)
			{
				mul = row * column;
				if (column == 0)
				{
					_putchar('0' + mul);
				}
				else if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mul);
				}
				else if (mul > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (mul / 100));
					_putchar('0' + ((mul % 100) / 10));
					_putchar('0' + (mul % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mul / 10));
					_putchar('0' + (mul % 10));
				}
			}
			_putchar('\n');
		}
	}
}
