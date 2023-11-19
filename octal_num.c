#include "main.h"

/**
 * print_octal - Prints octal number.
 * @args: Arguements.
 * Return: Integer value.
 */

int print_octal(va_list args)
{
	int x;
	int *a;
	int c = 0;
	unsigned int numb = va_arg(args, unsigned int);
	unsigned int t = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		c++;
	}
	c++;
	a = malloc(c * sizeof(int));

	for (x = 0; x < c; x++)
	{
		a[x] = t % 8;
		t /= 8;
	}
	for (x = c - 1; x >= 0; x--)
	{

		_putchar(a[x] + '0');
	}
	free(a);
	return (c);
}
