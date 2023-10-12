#include "function_pointers.h"

/**
 * print_name - fn
 *
 * @name: ptr to name
 *
 * @f: ptr to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
