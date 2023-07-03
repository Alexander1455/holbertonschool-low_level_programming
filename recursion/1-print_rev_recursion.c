#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0')/*Comprueba si el caracter actual no es el terminador nulo*/
    {
        _print_rev_recursion(s + 1);
	/*Llama a la función recursivamente pasando la siguiente posición en la cadena*/
        _putchar(*s); /*Imprime el caracter actual*/
    }
}}
