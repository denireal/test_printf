#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
/**
* handle_precision - Update fmt_flags based on precision
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
* @args: va_list arguments from _printf
*
* Description: This function scans the format string for precision specifications
* and updates the fmt_flags accordingly.
*/
void handle_precision(const char *fmt, fmt_flags_t *fmt_flags)
{
int precision = -1;
bool found_precision = false;

for (; *fmt != '\0'; fmt++)
{
if (*fmt == '.')
{
precision = 0;
found_precision = true;
}
else if (found_precision && (*fmt >= '0' && *fmt <= '9'))
{
precision = precision * 10 + (*fmt - '0');
}
else if (found_precision)
{
break;
}
}

if (found_precision)
{
fmt_flags->precision = precision;
}
}
