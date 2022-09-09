#include <stdio.h>

/**
 * main - displays positive numbers less than 10
 * Return: 0 if programn succeeds, non-zero if not
 */
int main(void)
{
	for (int i = 0 ; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
