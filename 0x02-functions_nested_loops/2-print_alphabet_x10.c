#include "main.h"
/**
 * print_alphabet_x0 - prints the lowercase alphabet 10 times on new lines
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i, j;


	for (i=0; i < 10; i++)
	{
        	for (j = 0; j < 26; j++)
		{
			_putchar(c + j);
		}
        	_putchar(10);
	}
}
