#include "main.h"

/**
 * printf_sre - prints str in rev
 * @args: arguments
 *
 * Return: string
 */
int printf_sre(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int a = 0;

	if (s == NULL)
		s = "(null)";
	while (s[a] != '\0')
		a++;

	for (i = a - 1; i >= 0; i--)
		_putchar(s[i]);

	return (a);
}
