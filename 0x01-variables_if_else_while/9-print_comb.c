#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: script that prints all possible combinations
 *		of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
