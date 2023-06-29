#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - function allows user to use the function to print name.
  * @name: name of varible that is being printed but another function.
  * @f: pointer to the function that us passed.
  */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
