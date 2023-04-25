#include "main.h"

/**
 * printf_oct - prints octal number
 * @val: arguments
 * Return: counter
 */
int printf_oct(va_list val)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int nm = va_arg(val, unsigned int);
	unsigned int temp = nm;

	while (nm / 8 != 0)
	{
		nm /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 8;
		temp /= 8;

	}
	for (a = counter - 1; a >= 0; a--)
	{
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);

}
