#include <stdio.h>
/**
 * sum_of_multiples - print the sum of multiples
 * of 3 or 5 below 1024
 *
 * Return: Always void
 */
int main(void)
{
	int i, j, k, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		j = i / 3;
		k = i / 5;
		if (((j * 3) == i) || ((k * 5) == i))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return;
}
