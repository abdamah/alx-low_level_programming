#include "main.h"
/**
*cap_string - capitalizez first character of each word in a given string
*@s: string parameter
*Return:char *
*/
char *cap_string(char *s)
{
	int i, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (j = 0; delimeters[j] != '\0'; j++)
					if (s[i] == delimeters[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
