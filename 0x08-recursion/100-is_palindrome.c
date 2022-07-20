#include "main.h"

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: 1 if a given string is palindrome, otherwise 0
*/

int is_palindrome(char *s)
{
	int index = 0;
	int len = get_strlen(s);

	if (!(*s))
		return (1);

	return (find_palindrome(s, len, index));
}

/**
 * get_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int get_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_strlen(s + len);
	}

	return (len);
}

/**
 * find_palindrome - Checks if a given string is a palindrome.
 * @s: given string
 * @len: The length of a given string
 * @index: index of the string to be checked.
 *
 * Return: 1 if palindrome, otherwise 0
 */
int find_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (find_palindrome(s, len, index + 1));

	return (0);
}
