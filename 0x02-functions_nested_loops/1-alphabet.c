#include "main.h"

/**
 * print_alphabet - prints teh lowercase alphabet
 * Return: void
 */

void print_alphabet(void)
{
	chars c = 'a';
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(c +i);
	}
	_putchar(10);
}