#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
