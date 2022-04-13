#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints a name.
* @name: input nameof a persom
* @f: function pointer.
*
* Return: no return.
*/
void print_name(char *name, void (*f)(char *))

{
if (name == NULL)
return;
f(name);
}
