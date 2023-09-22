#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_pointer - Prints a pointer address using the 'p' specifier
* @args: va_list arguments from _printf
* @fmt_flags: Pointer to the struct fmt_flags (unused)
*
* Description: This function prints a pointer address using the 'p' specifier.
*
* Return: The number of characters printed.
*/
int print_pointer(va_list args, fmt_flags_t *fmt_flags)
{
void *pointer;

(void)fmt_flags;
pointer = va_arg(args, void *);
return (printf("%p", pointer));
}
