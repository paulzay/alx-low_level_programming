/**
 * _strcpy - fn
 * @dest: input
 * @src: input
 * Return: return
*/
char *_strcpy(char *dest, char *src)
{
	int j;
	int k;

	for (j = 0; src[j] != '\0'; a++)
	{
		dest[k] = src[j];
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
