#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number
 * @n: lower than 0
 *
 * Return: the value factorial
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		fact *= factorial(n - 1);
	return (fact);
}
