#include <stdio.h>

/**
* main - prints all passed arguments
*@argc: argument count
*@argv: vector argument
*Return: int
*/

int main(int argc, char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

		return (0);
}
