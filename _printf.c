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
int (*print_func)(va_list args, fmt_flags_t *fmt_flags);
const char *fmt;
fmt_flags_t fmt_flags = {0, 0, 0, 0, 0, 0, 0, 0, 0};
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

print_func = get_print(*fmt);
if (fmt_flags.minus)
{
fmt_flags.zero = false;
}
char_count += (print_func)
? print_func(args, &fmt_flags)
: _printf("%%%c", *fmt);
}
else
{
char_count += _putchar(*fmt);
}
}

va_end(args);
return (char_count);
}
