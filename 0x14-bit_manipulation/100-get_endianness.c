#include "main.h"

/**
 * get_endianness - checks the endianness of a cpu.
 *
 * Return: 1 if Little endian, 0 if Big endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *pnum = (char *)&num;

	return (pnum[0]);
}
