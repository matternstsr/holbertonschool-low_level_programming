#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - performs simple operations
  * @s: s is the operator passed as argument
  *
  * Return: ret a * to the func that corresponds to the oper.
  */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int inc = 0;

	while (inc < 5)
	{
		if (strcmp(s, ops[inc].op) == 0)
			return (ops[inc].f);

		inc++;
	}

	return (0);
}
