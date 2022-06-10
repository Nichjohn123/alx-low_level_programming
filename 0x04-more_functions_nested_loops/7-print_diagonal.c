#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: length of diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar (92);
			_putchar ('\n');

		}

	}

	else
	{
		_putchar ('\n');
	}

}
