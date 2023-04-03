#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: printing program
 *
 * Return: always 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 15 == 0)
			printf("FizzBuzz");
		else if (d % 3 == 0)
			printf("Fizz");
		else if (d % 5 == 0)
			printf("Buzz");
		else
			printf("%i", d);
		if (d < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
