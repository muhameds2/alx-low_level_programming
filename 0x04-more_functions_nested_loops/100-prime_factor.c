#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the
 * number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c--)
	{
		if (num % c == 0)
		{
			while (num % c == 0)
			{
				num = num / c;
			}
			if (num == 1)
			{
				printf("%d\n", c);
				return (0);
			}
		}
	}
	printf("%ld\n", num);
	return (0);
}
