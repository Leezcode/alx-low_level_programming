#include <stdio.h>

/**
 * main - prints all multiples of 3 and 5 up to 1024,
 * followed by a new line
 * Return: 0 on successs
 */
int main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			printf("%d, ", i);
	}
	printf("\n");
	return (0);
}
