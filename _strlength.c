#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @str: String value
 * Return: Length of a string.
 */
int _strlen(char *str)
{
	int s;

	for (s = 0; str[s] != 0; s++)
		;
	return (s);
}

/**
 * _strlenz - Return length of string.
 * @str: String value.
 * Return: Length of string.
 */
int _strlenz(const char *str)
{
	int s;

	for (s = 0; str[s] != 0; s++)
		;
	return (s);
}
