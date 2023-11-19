#include "main.h"
#include <stdio.h>

/**
 *  printchar - Prints character.
 * @value: The variable.
 * Return: Always 0(success).
 */
int printchar(va_list value)
{
	char str;

	str = va_arg(value, int);
	_putchar(str);
	return (0);
}
