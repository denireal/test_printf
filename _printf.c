#include "main.h"
#include <stdarg.h>
#include <stdbool.h>

/**
* _printf - Custom printf function
* @format: Format string
* @...: Variable number of arguments
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
const char *fmt;
fmt_flags_t fmt_flags = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int char_count = 0;

va_start(args, format);

if (!format)
return (-1);

for (fmt = format; *fmt != '\0'; fmt++)
{
if (*fmt == '%')
{
fmt++;
if (*fmt == '%')
{
char_count += _putchar('%');
continue;
}
handle_flags(fmt, &fmt_flags);
handle_length_modifier(fmt, &fmt_flags);
handle_field_width(fmt, &fmt_flags);
handle_precision(fmt, &fmt_flags, args);

switch (*fmt)
{
case 'c':
char_count += print_char(args, &fmt_flags);
break;
case 's':
char_count += print_string(args, &fmt_flags);
break;
case '%':
char_count += print_percent_symbol(args, &fmt_flags);
break;
case 'd':
case 'i':
char_count += print_decimal(args, &fmt_flags);
break;
case 'b':
char_count += print_binary(args, &fmt_flags);
break;
case 'u':
char_count += print_unsigned(args, &fmt_flags);
break;
case 'o':
char_count += print_octal(args, &fmt_flags);
break;
case 'x':
char_count += print_hex(args, &fmt_flags);
break;
case 'X':
char_count += print_hex_upper(args, &fmt_flags);
break;
case 'S':
char_count += print_string(args, &fmt_flags);
break;
default:
char_count += _putchar('%');
char_count += _putchar(*fmt);
continue;
}

if (fmt_flags.minus)
{
fmt_flags.zero = false;
}
}
else
{
char_count += _putchar(*fmt);
}
}

va_end(args);
return (char_count);
}
