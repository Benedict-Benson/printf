#include "main.h"

/**
 * printf_ptr - prints hexgecimal number
 * @val: arguments.
 * Return: counter.
 */
int printf_ptr(va_list val)
{
	long int m;
	void *p;
	char *s = "(nil)";
	int b;
	int i;

	p = va_arg(val, void*);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	m = (unsigned long int)p;
	_putchar('0');

	_putchar('x');
	b = printf_hex_aux(m);

	return (b + 2);

}
