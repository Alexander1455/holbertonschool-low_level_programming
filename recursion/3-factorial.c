#include "main.h"

/**
 * factorial - obtiene el factorial de n
 * @n: entero
 *
 * Return: En caso de éxito, devuelve 1.
 * En caso de error, devuelve -1 y establece errno adecuadamente.
 */
int factorial(int n)
{
	if (n < 0) /* Comprueba si n es menor que 0*/
		return (-1); /* Devuelve -1 si n es negativo*/
	if (n == 0) /* Comprueba si n es igual a 0*/
		return (1); /* Devuelve 1 si n es 0 */
	return (n * factorial(n - 1));
	/* Devuelve el producto de n por el factorial de n-1*/
}
