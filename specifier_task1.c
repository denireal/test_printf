#include "main.h"
#include <stdio.h>
/**
* print_decimal - Prints an integer using the 'd' or 'i' specifier
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Description: This function prints an integer using the 'd' or 'i' specifier.
*
* Return: The number of characters printed.
*/
int print_decimal(va_list args, fmt_flags_t *fmt_flags)
{
int value;

(void)fmt_flags;
value = va_arg(args, int);
return (printf("%d", value));
}
