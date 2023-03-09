#include "main.h"

/**
 *_print_rev_recursion: A function that prints a string in reverse.
 *
 *@s:Pointer to string parameters
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
	
}
