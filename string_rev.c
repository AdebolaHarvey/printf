#include "main.h"
/**
 * s_rev - Prints strings in reverse.
 * @vars: Arguements.
 * Return: The strings.
 */
int s_rev(va_list vars)
{
	char *string = va_arg(vars, char*);
	int index;
	int strings = 0;

	if (string == NULL)
		string = "(null)";
	while (string[strings] != '\0')
		strings++;
	for (index = strings - 1; index >= 0; index--)
		_putchar(string[index]);
	return (strings);
}
