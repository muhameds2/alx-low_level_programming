#include "main.h"
/**
 * print_alphabet_x10 - using nested loops prints
 *			the alphabet in lowercase
 *			ten times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}
