#include <stdio.h>

/**
 * main - print all single digit numbers in base 10 starting at 0.
 *
 * Return: 0.
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");

	return (0);
}
