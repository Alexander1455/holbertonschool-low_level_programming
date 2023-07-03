#include "main.h"

/**
 * _puts_recursion - Imprime una cadena seguida de una nueva línea
 * @s: cadena
 *
 * Return: En caso de éxito, devuelve 1.
 * En caso de error, se devuelve -1 y se establece errno correctamente.
 */
void _puts_recursion(char *s)
{
	/* Si el carácter actual es el nulo (fin de la cadena) */
	if (*s == 0)
	{
		_putchar('\n'); /* Imprime una nueva línea */
		return;
	}
	_putchar(*s); /* Imprime el carácter actual de la cadena */
	_puts_recursion(s + 1);
	/* Llama a la función recursivamente con el siguiente carácter */
}
