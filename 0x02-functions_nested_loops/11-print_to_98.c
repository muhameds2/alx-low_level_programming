#include <stdio.h>
/**
 * print_to_98 - function to print all natural numbers
 * from n to 98
 * @n: the starting point
 *
 * Return: Always void
 */
void print_to_98(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
			printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
