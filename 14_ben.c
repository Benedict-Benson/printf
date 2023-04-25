#include "main.h"

/**
 * printf_roott - printf str to ROT13 place into buffer
 * @args: type struct  is allocated printf arguments
 * Return: counter
 *
 */
int printf_roott(va_list args)
{
	int j, i, counter = 0;
	int a = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		a = 0;
		for (j = 0; alpha[j] && !a; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;

				a = 1;
			}
		}
		if (!a)
		{
			_putchar(s[i]);
			counter++;
		}

	}

	return (counter);
}
