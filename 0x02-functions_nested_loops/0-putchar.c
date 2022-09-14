#include "main.h"

/**
 * main - prints _putchar to stdout
 *
 * Return: On success 0.
 */
int main(void)
{
	int i = 0;
	char s[] = "_putchar\n";

	while (i < 9)
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
