#include "main.h"


/**
 * get_endianness - check endianess
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num;

	num = i;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
