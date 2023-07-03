#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string - Puntero al inicio de la cadena de caracteres.
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	/* Comprueba si el caracter actual no es el caracter nulo '\0' */
	if (*s != '\0')
	{
	/* Retorna 1 más el resultado de la función llamada con el caracter */
	return (1 + _strlen_recursion(s + 1));
	}
	/* Retorna 0 cuando se llega al final de la cadena ('\0') */
	return (0);
}
