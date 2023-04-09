#include <stdio.h>
/**
 * main - its prints the number of arguments on it.
 * @argc - counts arguments
 * @argv: The arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
