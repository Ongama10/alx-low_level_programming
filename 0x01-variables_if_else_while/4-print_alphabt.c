#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both except q and e
 *
 * Return: Always 0
 */
int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n')
	return (0);
}
