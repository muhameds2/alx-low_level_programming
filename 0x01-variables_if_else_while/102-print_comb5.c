#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	char a, b;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			a = i / 10 + '0';
			b = i % 10 + '0';
			_putchar(a);
			_putchar(b);
			_putchar(' ');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	return (0);
}
