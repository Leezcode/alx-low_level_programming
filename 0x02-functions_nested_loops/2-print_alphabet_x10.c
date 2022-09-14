#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 *
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
