#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
* handle_precision - Update fmt_flags based on precision specifier
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
* @args: va_list of arguments from _printf
*
* Description: This function scans the format string for precision specifier
* and updates the fmt_flags accordingly.
*/
void handle_precision(const char *fmt, fmt_flags_t *fmt_flags, va_list args)
{
int curr_i;
int precision = -1;

for (curr_i = fmt_flags->i + 1; fmt[curr_i] != '\0'; curr_i++)
{
if (fmt[curr_i] == '.')
{
precision = 0;
continue;
}
else if (isdigit(fmt[curr_i]))
{
if (precision == -1)
{
precision = 0;
}
precision = precision * 10 + (fmt[curr_i] - '0');
}
else if (fmt[curr_i] == '*')
{
curr_i++;
precision = va_arg(args, int);
break;
}
else
{
break;
}
}

fmt_flags->i = curr_i - 1;
fmt_flags->precision = precision;
}
