#include "main.h"

/**
 * sqrt2 - Permite evaluar desde 1 hasta n
 * @a: mismo número que n
 * @b: número que itera desde 1 hasta n
 * Return: En caso de éxito, devuelve 1.
 * En caso de error, se devuelve -1 y se establece errno apropiadamente.
 */

int sqrt2(int a, int b)
{
	if (b * b == a) /*Comprueba si el cuadrado de b es igual a a */
	return (b); /*Devuelve b como la raíz cuadrada de a */
	else if (b * b > a) /*Comprueba si el cuadrado de b es mayor que a */
	return (-1); /*Devuelve -1 para indicar que no hay raíz cuadrada entera */
	return (sqrt2(a, b + 1));
	/*Llama recursivamente a la función aumentando b en 1*/
}

/**
 * _sqrt_recursion - Devuelve la raíz cuadrada natural de n
 * @n: Número entero
 * Return: En caso de éxito, devuelve 1.
 * En caso de error, se devuelve -1 y se establece errno apropiadamente.
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
/*Llama a la función sqrt2 que calcula la raíz cuadrada de n desde 1*/
}
