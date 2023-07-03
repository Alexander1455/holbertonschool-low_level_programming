#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);/*Imprime 0 si no hay argumentos*/

	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);/*Imprime el número de argumentos menos 1*/
	}
	return (0);
}
