#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: Always 0 (success)
 */
int main(void)
{
	int temp;
	char ch;

	srand(time(NULL));

	while (temp <= 2645)
	{
		ch = rand() % 128;
		temp += ch;
		putchar(ch);
	}

	putchar(2772 - temp);

	return (0);
}
