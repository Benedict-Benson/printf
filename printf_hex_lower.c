#include "main.c"

/**
 * printf_hex - prints an hexdecimal number
 * @val: arguments
 * Return: counter
 */
int printf_hex(va_list val)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int nm = va_arg(val, unsigned int);
	unsigned int temp = nm;

	while (nm / 16 != 0)
	{
		nm /= 16;
		counter++;
	}

	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 16;
		temp /= 16;
	}

	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}

