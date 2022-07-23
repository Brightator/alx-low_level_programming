#include "main.h"

/**
 * main - the main function
 * @argc: displays the number of argument in a fxn
 * @argv: the argument array
 *
 * Return: 0
 */

int main(int argc, *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
