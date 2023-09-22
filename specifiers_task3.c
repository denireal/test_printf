#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_unsigned - Prints an unsigned integer using the 'u' specifier
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Description: This function prints an unsigned integer using the 'u' specifier.
*
* Return: The number of characters printed.
*/
int print_unsigned(va_list args, fmt_flags_t *fmt_flags)
{
unsigned int value;

(void)fmt_flags;
value = va_arg(args, unsigned int);
return (printf("%u", value));
}

/**
* print_octal - Prints an integer in octal format using the 'o' specifier
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Description: This function prints an integer in octal format using the 'o' specifier.
*
* Return: The number of characters printed.
*/
int print_octal(va_list args, fmt_flags_t *fmt_flags)
{
unsigned int value;

(void)fmt_flags;
value = va_arg(args, unsigned int);
return (printf("%o", value));
}

/**
* print_hex - Prints an integer in lowercase hexadecimal using 'x' specifier
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Description: This function prints an integer in lowercase hexadecimal format
* using the 'x' specifier.
*
* Return: The number of characters printed.
*/
int print_hex(va_list args, fmt_flags_t *fmt_flags)
{
unsigned int value;

(void)fmt_flags;
value = va_arg(args, unsigned int);
return (printf("%x", value));
}

/**
* print_hex_big - Prints an integer in uppercase hexadecimal using 'X' specifier
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Description: This function prints an integer in uppercase hexadecimal format
* using the 'X' specifier.
*
* Return: The number of characters printed.
*/
int print_hex_upper(va_list args, fmt_flags_t *fmt_flags)
{
unsigned int value;

(void)fmt_flags;
value = va_arg(args, unsigned int);
return (printf("%X", value));
}
