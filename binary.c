#include "main.h"
/**
 * convert_bin - Prints binary number.
 * @val: Value.
 * Return: Integer value.
 */
int convert_bin(va_list val)
{

	int f = 0;
	int c = 0;
	int i, a = 1, b;
	unsigned int numb = va_arg(val, unsigned int);
	unsigned int q;

	for (i = 0; i < 32; i++)
	{
		q = ((a << (31 - i)) & numb);
		if (q >> (31 - i))
			f = 1;
		if (f)
		{
			b = q >> (31 - i);
			_putchar(b + 98);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
