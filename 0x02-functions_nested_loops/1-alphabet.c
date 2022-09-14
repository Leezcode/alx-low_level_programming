#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: On success 0.
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
