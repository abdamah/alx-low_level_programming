#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: counts the number of arguments
 * @argv: the argument that passed by the program
 *
 * Return: the opcode hex number
 */
int main(int argc, char **argv)
{
	int index = 0, bytes;

	/* if the argv is less or more then Error */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert passed argument into integer and store to bytes variable*/
	bytes = atoi(argv[1]);

	/* Exit if bytes less than 0 with status 2 and print Error */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* we use index to loop through an array, we receive in the argv */
	while (index < bytes)
	{
		/* Print opcode in hexadecimal format */
		printf("%02hhx", *((char *)(main + index)));
		if (bytes > index + 1)
			printf(" ");
		index++;
	}
	printf("\n");

	return (0);
}
