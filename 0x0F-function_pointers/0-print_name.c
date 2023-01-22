#include "function_pointers.h"

/**
 * print_name - To print a name
 * @name: the name to be printed
 * @f: a callback function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
