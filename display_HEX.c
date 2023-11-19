#include "main.h"

/**
 * display_HEX - Prints an hexadecimal number
 * @val: Input value.
 * Return: Integer value.
 */

int display_HEX(unsigned long int val)
{
	long int index;
	long int *a;
	long int c = 0;
	unsigned long int t = val;

	while (val / 16 != 0)
	{
		val /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(long int));

	for (index = 0; index < c; index++)
	{
		a[index] = t % 16;
		t = t / 16;
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
