#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of two passwed numbers
*@argc: number of arguments
*@argv: vector arguments
*Return: int
*/

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
