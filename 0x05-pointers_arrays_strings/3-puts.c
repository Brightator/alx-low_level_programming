#include "main.h"
/**
 * _puts - prints the output
 *
 * @str: string
 */

void _puts(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
