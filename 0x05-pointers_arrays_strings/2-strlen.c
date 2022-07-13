#include "main.h"
/**
 * _strlen - calculates length of string
 *
 * @s: string
 *
 * Return: Always len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
