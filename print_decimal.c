#include "main.h"

/*
 * Print - a decimal int value
 * count from 0
 * return: value
 */

int print_decimal(long int value)
{	
	int count = 0;

/* print a negative number*/
if (value < 0)
	{ 
		count += _putchar('-');
		value = value * -1;
	}

/* 1st remove last digit
 * Print the remaining digit
 * Also print last digit
 */
if (value/10)
	count += print_decimal(value/10);

count += _putchar(value %10 + '0');

/* count the num of digits
 *increase count by 1 in each
 */
// do { value /= 10;
// 	++ count;
// 	} while (value ! = 0);

}
