#include <stdio.h>
/**
 * print_triangle - function prints a tringale
 *@size: size of the triangle
 *
 * Return: Always void
 */
void print_triangle(int size)
{
	int row, column, i;

	if (size <= 0)
		printf("\n");
	else
	{
		for (row = 0; row < size; row++)
		{
			for (i = 0; i < size - i - 1; i++)
			{
				printf(" ");
			}
			for (column = 0; column <= row; column++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
}
