#iclude "main.h"

/**
 * print_numbers - prints 123456789\n
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}

	_putchar ('\n');
}