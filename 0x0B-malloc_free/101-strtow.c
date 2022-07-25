#include "main.h"

/**
 *strtow - words a stirng into words
 *@str: string to be splitted
 *
 *Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	char **word;
	int i, j = 0, temp = 0, size = 0, words = word_count(str);

	if (words == 0)
		return (NULL);

	word = (char **)malloc(sizeof(char *) * (words + 1));

	if (word != NULL)
	{
		for (i = 0; i <= length(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;

			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				word[j] = (char *)malloc(sizeof(char) * size + 1);
				if (word[j] != NULL)
				{
					while (temp < size)
					{
						word[j][temp] = str[(i - size) + temp];
						temp++;
					}
					word[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(word[j]);

					free(word);

					return (NULL);
				}
			}
		}
		word[words] = NULL;

		return (word);
	}
	else
		return (NULL);
}

/**
 * word_count - counts the number of words in str
 *@str: string to be used
 *
 *Return: number of words
 */
int word_count(char *str)
{
	int i = 0, words = 0;

	while (i <= length(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}

		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}

	return (words);
}
/**
 * length - returns length of str
 *@str: string to be counted
 *
 * Return: length of the string
 */

int length(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}

	return (len);
}
