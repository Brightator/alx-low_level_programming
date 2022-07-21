#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: the argument
 *
 * Return: Always 0.
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion("Puts with recursion");
	}
	else
		_putchar('\n')

	        return (0);
}
