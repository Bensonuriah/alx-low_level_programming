#include <stdio.h>
/**
 * main - will print the name of the program
 * @argc : count number of arguments
 * @argv : pointer to the strings
 * Return: Awalys(0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
