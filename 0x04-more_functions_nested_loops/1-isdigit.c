#include "main.h"

/**
 * _isdigit() - checks if loop is digit
 *
 * Return: Always 0 or 1
 */

int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
}
