#include "main.h"

/**
 * s_rot13 - Change to rot13.
 * @args: variables of printf.
 * Return: Integer value.
 */
int s_rot13(va_list args)
{
	int index, k, c = 0;
	int l = 0;
	char *string = va_arg(args, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (string == NULL)
		string = "(null)";
	for (index = 0; string[index]; index++)
	{
		l = 0;
		for (k = 0; a[k] && !l; k++)
		{
			if (string[index] == a[k])
			{
				_putchar(b[k]);
				c++;
				l = 1;
			}
		}
		if (!l)
		{
			_putchar(string[index]);
			c++;
		}
	}
	return (c);
}
