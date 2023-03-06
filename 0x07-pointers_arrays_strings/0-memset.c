#include "main.h"
/**
 * Main - This function will memory with a constant byte.
 * b - the constant to be filled in the memory 
 * Return Always - 0
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
	
