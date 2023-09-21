/**
 * _strcat - function that cocatenates two strings
 *@dest: string 1
 *@src: string 2 to be concatenates to str 1
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		k = i;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + (k + 1)) = *(src + j);
	}
	*(dest + (k + 1)) = '\0';
	return (dest);
}
