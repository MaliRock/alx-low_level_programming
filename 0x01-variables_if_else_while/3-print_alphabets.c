#include <stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return: 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for (i = 0; i < 56; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
