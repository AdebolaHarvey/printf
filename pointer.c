#include "main.h"

/**
 * display_pointer - prints hexadecimal number.
 * @args: Input value.
 * Return: Integer value.
 */
int display_pointer(va_list args)
{
	void *pointer;
	char *string = "(nil)";
	long int x;
	int b;
	int index;

	pointer = va_arg(args, void*);

		if (pointer == NULL)
		{
			for (index = 0; string[index] != '\0'; index++)
			{
				_putchar(string[index]);
			}
			return (index);
		}

	x = (unsigned long int)pointer;
	_putchar('0');
	_putchar('x');
	b = display_HEX_x(x);
	return (b + 2);
}
