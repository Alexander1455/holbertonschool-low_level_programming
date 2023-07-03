#include "main.h"

/**
 * _pow_recursion - Calcula x elevado a la potencia de y mediante recursión.
 * @x: Número entero base.
 * @y: Potencia a la que se eleva x.
 *
 * Return: Devuelve el resultado de la operación.
 *         En caso de error, devuelve -1.
 */
int _pow_recursion(int x, int y)
{
	/* Caso base: Si el exponente es negativo, no está definido, devuelve -1 */
	if (y < 0)
		return (-1);

	/* Caso base: Si el exponente es 0, cualquier número elevado a 0 es 1 */
	if (y == 0)
		return (1);

	/*Caso general: Realiza la recursión para calcular x elevado a y - 1*/
	return (x * _pow_recursion(x, y - 1));
}
