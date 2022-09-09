#include <stdio.h>

/**
 * main - displays alphabet in lowercase
 * Return: 0 if programn succeeds, non-zero if not
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
