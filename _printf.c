#include "main.h"
/**
 * _printf - Produces a output according to a format.
 * @format: Identifier to look for.
 * Return: The lenght of the string.
 */
int _printf(const char *format, ...)

{
	instruct p[] = {
		{"%s", printstring}, {"%c", printchar}, {"%%", print_percent}, {"%i", print_an_i}, {"%d", print_a_d}, {"%r", s_rev}, {"%R", s_rot13}, {"%b", convert_bin}, {"%u", display_unsigned}, {"%o", print_octal}, {"%x", display_hexd}, {"%X", display_hex_d}, {"%S", display_s}, {"%p", display_pointer}
	};
	va_list args;

	int a = 0, b, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (p[b].i[0] == format[a] && p[b].i[1] == format[a + 1])
			{
				len += p[b].f(args);
				b = b + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		len++;
		a++;
	}
	va_end(args);
	return (len);
}

