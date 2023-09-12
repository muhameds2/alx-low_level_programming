/**
 * _abs - function that computes the absolute
 *	value of integer n
 * @n: the integer to be returned it absolute value
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
