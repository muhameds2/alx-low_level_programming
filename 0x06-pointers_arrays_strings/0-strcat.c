/**
 * _strcat - function that cocatenates two strings
 *@dest: string 1
 *@src: string 2 to be concatenates to str 1
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		j = i + 1;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + j + i) = *(src + i);
	}
	*(dest + j + i + 1) = '\0';
	return (dest);
}
