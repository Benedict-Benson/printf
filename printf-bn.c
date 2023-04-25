#include "main.h"

/**
 * printf_bin - prints a binary no
 * @val: arguments
 * Return: 1
 */
int printf_bin(va_list val)
{
	int count = 0;
	int flag = 0;

	int j, a = 1, c;

	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((a << (31 - j)) & num);
		if ((p >> (31 - j)))
			flag = 1;

		if (flag)
		{
			c = p >> (31 - j);
			_putchar(c + 48);
			count++;
		}

	}

	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
