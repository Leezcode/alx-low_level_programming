#include <stdio.h>

/**
 * main - prints all multiples of 3 and 5 up to 1024,
 * followed by a new line
 */
void main(void)
{
	int i;
	
	for (i = 0; i < 1024; i++){
		if ((i % 3 == 0) || (i % 5 == 0)){
			printf("%d\n", i);	
		}
	}
}
