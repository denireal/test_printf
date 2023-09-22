#include "main.h"

/**
* convert - Convert a number to a string representation in the given base
* @num: The input number
* @base: The base for conversion (e.g., 10 for decimal, 16 for hex)
* @lowercase: Flag for using lowercase hex characters (1 for lowercase,
* 0 for uppercase)
* @result: Pointer to the result buffer
* @buf_size: Size of the result buffer
*
* Return: Pointer to the result string, or NULL on failure
*/
char *convert(unsigned long int num, int base, int lowercase)
{
static char *rep;
static char buffer[50];
char *ptr;

rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
ptr = &buffer[49];
*ptr = '\0';
do {
*--ptr = rep[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
