#include "3-calc.h"
/**
 * main - performs simple operations
 *
 * @argc: number of arugement passed to main function.
 * @argv: pointer array parameter.
 *
 * Return: an
 */
int main(int argc, char *argv[])
{
	int (*funoperator)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	funoperator = get_op_func(argv[2]);

	if (!funoperator || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	/*If op is '%' or '/' and divider is '0' then should be error*/
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	/* if verything fine convert strings to integer print output */
	printf("%d\n", funoperator(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
