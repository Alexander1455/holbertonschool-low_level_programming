#include "main.h"

/**
 * prime2 - Función recursiva que evalúa si un número es primo.
 * @a: número a evaluar (es el mismo que 'n').
 * @b: número que itera desde 1 hasta 'n'.
 *
 * Return: En éxito devuelve 1.
 * En caso de error, devuelve -1 y configura 'errno' adecuadamente.
 */
int prime2(int a, int b)
{
	/*Caso base: si 'a' == 'b', retorna 1, indicando que el número es primo*/
	if (a == b)
		return (1);
	/*Si 'a' es divisible por 'b' sin residuo, entonces no es primo, retorna 0.*/
	else if (a % b == 0)
		return (0);
	/*Llamada recursiva: llama a la función prime2 con 'a' y 'b+1'.*/
	/*Así continúa evaluando los siguientes números hasta llegar al caso base*/
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - Comprueba si un número es primo.
 * @n: Número entero a evaluar.
 *
 * Return: En éxito devuelve 1.
 * En caso de error, devuelve -1 y configura 'errno' adecuadamente.
 */
int is_prime_number(int n)
{
	/*Si el número es menor o igual a 1, entonces no es primo, retorna 0.*/
	if (n <= 1)
		return (0);
	/*Llama a la función 'prime2' para evaluar si el número 'n' es primo.*/
	return (prime2(n, 2));
}
