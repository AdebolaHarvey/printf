#include "main.h"

/**
 * display_HEX_x - prints hexadecimal number.
 * @var: value
 * Return: Integer value.
 */

int display_HEX_x(unsigned long int var)
{
	long int index;
	long int *a;
	long int c = 0;
	unsigned int t = var;

	while (var / 16 != 0)
	{
		var /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(long int));

	for (index = 0; index < c; index++)
	{
		a[index] = t % 16;
		t /= 16;
	}
	for (index = c - 1; index >= 0; index--)
	{
		if (a[index] > 9)
			a[index] = a[index] + 7;
		_putchar(a[index] + '0');
	}
	free(a);
	return (c);
}
