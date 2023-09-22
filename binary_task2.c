#include "main.h"
#include <stdarg.h>

/**
* print_binary - Prints an unsigned integer in binary format
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Return: The number of characters printed.
*/
int print_binary(va_list args, fmt_flags_t *fmt_flags)
{
int j, i = 0;
unsigned int value;
int printed_chars = 0;
char bin_str[33];

(void)fmt_flags;
value = va_arg(args, unsigned int);

if (value == 0)
{
_putchar('0');
return (1);
}

while (value > 0)
{
bin_str[i] = (value & 1) ? '1' : '0';
value >>= 1;
i++;
}

bin_str[i] = '\0';

for (j = i - 1; j >= 0; j--)
{
_putchar(bin_str[j]);
printed_chars++;
}

return (printed_chars);
}
