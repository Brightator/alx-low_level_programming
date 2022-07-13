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

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
