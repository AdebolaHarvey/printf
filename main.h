#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - Converts printf.
 * @i: Char pointer.
 * @f: Function for conversion specifier.
 * Description: ...
 */
typedef struct format

{
	char *i;
	int (*f)();
} instruct;

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list value);
int printstring(va_list value);
int _strlen(char *str);
int _strlenz(const char *str);
int print_percent(void);
int print_an_i(va_list args);
int print_a_d(va_list args);
int convert_bin(va_list val);
int display_unsigned(va_list args);
int print_octal(va_list args);
int display_hexd(va_list var);
int display_hex_d(va_list var);
int display_HEX(unsigned long int val);
int display_pointer(va_list args);
int display_HEX_x(unsigned long int var);
int s_rev(va_list vars);
int s_rot13(va_list args);
int display_s(va_list args);

#endif
