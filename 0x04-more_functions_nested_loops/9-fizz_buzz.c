#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print fizz instead of the number
 * 5 multiples print buzz instead of the number
 * 3 & 5 multiples print fizzbuzz instead of the number
 * Return: Always 0 (success)
 */
int main(void)
{

	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 === 0)
		{
			if (i < p)
				printf("Buzz");

			else
				printf("Buzz");
		}

		else
		{
			printf("%i", i)
		}

		i++;


	}
	printf("\n");
	return (0);
}



