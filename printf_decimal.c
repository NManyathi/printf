#include "main.h"
#include <stdio.h>

/**
 *convert_to - convert numbers
 *Description: This function convert numbers to other formats
 *decimal, octal, hexadecimal, binary etc..
 *@representation: char representation[] = "0123456789ABCDEF";
 *@num: num to tranasform
 *@base: base to transform num
 *Return: number into char pointer
 */
char *convert(char representation[], unsigned long int num, int base, int lowercase)
{
	char *ptr;
	static char buffer[128];
	int mod = 0;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		mod = num % base;
		*--ptr = representation[mod];
		num /= base;
	} while (num != 0);
	return (ptr);
}
