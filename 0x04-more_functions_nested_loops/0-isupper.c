/**
 * _isupper - Entry point
 *@c: the character to be checked if it's upper case of not
 *
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
