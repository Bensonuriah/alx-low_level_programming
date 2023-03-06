#include "main.h"

/**
 *_memset:is used to fill a block of memory with a particular value
 *@b:The constant to be filled in the memory.
 *@n:The number of bytes to set.
 *@s:The pointer.
 *Return:A pointer to the filled memory area @s
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
