#include "main.h"
/**
 * print_square - function that print a square followed by a newline
 *@size: the size of the square
 *
 * Return: Always void
 */
void print_square(int size)
{
	int row, column;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
