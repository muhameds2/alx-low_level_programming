#include "main.h"
/**
 * print_diagonal - function draws a digonal line on the terminal
 *@n: the number of times the character \ will be printed
 *
 * Return: Always void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		_putchar(92);
		_putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
