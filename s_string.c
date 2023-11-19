#include "main.h"
/**
 * display_s - Prints s strings.
 * @args: input value.
 * Return: Integer value.
 */
int display_s(va_list args)
{
	char *string;
	int index, len = 0;
	int val;

	string = va_arg(args, char *);
	if (string == NULL)

		string = "(null)";
	for (index  = 0; string[index] != '\0'; index++)
	{
		if (string[index] < 32 || string[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			val = string[index];

			if (val  < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + display_HEX(val);
		}
		else
		{
			_putchar(string[index]);
			len++;
		}
	}
	return (len);
}
