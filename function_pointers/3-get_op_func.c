#include "3-calc.h"
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;
/**
 *
 */
int (*get_op_func(char *s))(int, int)
{
  if (!s)
    return (NULL);
  while
    
}
