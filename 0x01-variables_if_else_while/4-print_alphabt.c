#include <stdio.h>

/**
 * main - displays alphabet in lowercase
 * Return: 0 if programn succeeds, non-zero if not
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
