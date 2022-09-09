#include <stdio.h>

/**
 * main - displays positive numbers less than 10
 * Return: 0 if programn succeeds, non-zero if not
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
