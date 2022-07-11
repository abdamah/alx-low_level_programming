/**
 * *_strcpy - copies string to given destination
 * @dest: pointer parameter to copied it
 * @src: pointer parameter copied from it.
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = *(src + length);

	return (dest);
}
