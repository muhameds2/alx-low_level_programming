/**
 * string_toupper - changes all lower case letters to a string
 * of uppercase letters
 * @str: string to be checked
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (s);
}
