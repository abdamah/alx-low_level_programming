#include "3-calc.h"
/**
 * get_op_func - pointer to a function passed by the user
 *
 * @s: the operator paremeter
 *
 * Return: a pointer to the function depending of the operator parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
