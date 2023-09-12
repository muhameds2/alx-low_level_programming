/**
 * _isalpha - function that check if c
 * is alphabetic or not
 * @c: character to be checked
 *
 * Return: 1, if c is alphabetic 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
