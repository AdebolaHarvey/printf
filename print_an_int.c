 #include "main.h"

/**
 * print_an_i - Prints integers.
 * @args: Arguements.
 * Return: Integer value.
 */
int print_an_i(va_list args)
{
	int x = va_arg(args, int);
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

/**
 * print_a_d - Prints integers.
 * @args: Arguements.
 * Return: Integer value.
 */
int print_a_d(va_list args)
{
	int x = va_arg(args, int);
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
