#include <stdio.h>
/**
 * main - FizzBuzz test
 *
 * Return: void
 */
int main(void)
{
	int mul3, mul5, mul35, i;

	for (i = 1; i <= 100; i++)
	{
		mul3 = i * 3;
		mul5 = i * 5;
		if (mul3 % 3 == 0)
		{
			printf("Fizz");
		}
		else if (mul5 % 5 == 0)
		{
			printf("Buzz");
		}
		else if (((mul3 % 3) == 0) && ((mul5 % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", i);
	}
}
