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
	/* Si el primer carácter de la cadena es NULL (fin de cadena) */
	if (*s == 0)
	{
		/* Imprime un salto de línea */
		_putchar('\n');
		/* Finaliza la función */
		return;
	}
	/* Imprime el carácter actual */
	_putchar(*s);
/*Llama recursivamente a la función con el siguiente carácter de la cadena*/
	_puts_recursion(s + 1);
}
