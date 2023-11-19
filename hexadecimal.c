#include "main.h"
/**
 * display_hexd - print an hexadecimal number.
 * @var: variables
 * Return: integer value.
 */
int display_hexd(va_list var)
{
	int index;
	int *a;
	int c = 0;
	unsigned int numb = va_arg(var, unsigned int);
	unsigned int t = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(int));

	for (index = 0; index < c; index++)
	{
		a[index] = t % 16;
		t /= 16;
	}
	for (index = c - 1; index >= 0; index--)
	{
		if (a[index] > 9)
			a[index] = a[index] + 39;
		_putchar(a[index] + '0');
	}
	free(a);
	return (c);
}
