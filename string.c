#include "main.h"
/**
 * printstring - Print string.
 * @value: Variable.
 * Return: Length of the string.
 */
int printstring(va_list value)
{
	char *str;
	int s;
	int len;

	str = va_arg(value, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		len = _strlen(str);
		for (s = 0; s < len; s++)
			_putchar(str[s]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (s = 0; s < len; s++)
			_putchar(str[s]);
		return (len);
	}
}
