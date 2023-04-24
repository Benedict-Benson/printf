#include "main.h"

/**
 * _printf - fn that selects the fn to print
 * @format: identifier to look for
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", printf_stng}, {"%c", printf_char},
		{"%%", printf_empty}, {"%i", printf_int},
		{"%d", printf_deci}, {"%r", printf_sre},
		{"%R", printf_roott}, {"%b", printf_bin},
		{"%u", printf_unsigned}, {"%o", printf_oct},
		{"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exstng}, {"%p", printf_ptr}
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
			if (m[b].id[0] == format[a] && m[b].id[1] == format[a + 1])
			{
				len += m[b].f(args);
				a = a + 2;
				goto Here;
			}

			b--;
		}

		_putchar(format[a]);
		len++;

	}

	va_end(args);
	return (len);
}
