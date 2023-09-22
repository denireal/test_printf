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
char *convert(unsigned long int num, int base, int is_lowercase,
char *result, size_t buf_size)
{
static const char *lower_hex = "0123456789abcdef";
static const char *upper_hex = "0123456789ABCDEF";
const char *hex_chars = (is_lowercase) ? lower_hex : upper_hex;
char *ptr = result + buf_size - 1;

*ptr = '\0';

if (buf_size == 0 || result == NULL)
return (NULL);

if (num == 0)
{
if (buf_size >= 2)
{
*(--ptr) = '0';
return ptr;
}
else
{
return (NULL);
}
}

while (num != 0 && buf_size > 1)
{
if (ptr <= result)
return (NULL);

switch (base)
{
case 16:
*(--ptr) = hex_chars[num % 16];
break;
case 8:
*(--ptr) = hex_chars[num % 8];
break;
default:
*(--ptr) = hex_chars[num % 10];
break;
}

num /= base;
}

return (ptr);
}
