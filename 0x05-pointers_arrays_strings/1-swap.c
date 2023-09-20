/**
 * swap_int - function that swaps the values of two integers
 *@a: integer 1 address
 *@b: integer 2 address
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}
