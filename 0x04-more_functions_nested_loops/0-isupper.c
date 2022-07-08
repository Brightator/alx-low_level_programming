#include "main.h"
#include <studio.h>
/**
 * _isupper - uppercase letters
 *
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c == toupper(c))
		return (1);
	else
		return (0);
}
