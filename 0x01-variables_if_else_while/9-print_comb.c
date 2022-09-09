#include <stdio.h>

/**
 * main - displays all combinations of single-digit numbers
 * Return: 0 if programn succeeds, non-zero if not
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
