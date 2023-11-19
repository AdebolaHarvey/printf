#include "main.h"

/**
 * display_unsigned - Prints integers.
 * @args: Input.
 * Return: Integer value.
 */
int display_unsigned(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int numb, last = x % 10, dig, expn = 1;
	int y = 1;

	x = x / 10;
	numb = x;

	if (last < 10)
	{
		_putchar('-');
		numb = -numb;
		x = -x;
		last = -last;
		y++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			expn = expn * 10;
			numb = numb / 10;
		}
		numb = x;
		while (expn > 0)
		{
			dig = numb / expn;
			_putchar(dig + '0');
			numb = numb - (dig * expn);
			expn = expn / 10;
			y++;
		}
	}
	_putchar(last + '0');
	return (y);
}
