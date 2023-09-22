#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
/**
* handle_field_width - Update fmt_flags based on field width
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
* @args: va_list arguments from _printf
*
* Description: This function scans the format string for field width
* specifications
* and updates the fmt_flags accordingly.
*/
void handle_field_width(const char *fmt, fmt_flags_t *fmt_flags)
{
int width = 0;
bool found_width = false;

for (; *fmt != '\0'; fmt++)
{
if (*fmt >= '0' && *fmt <= '9')
{
width = width * 10 + (*fmt - '0');
found_width = true;
}
else if (found_width)
{
break;
}
}

if (found_width)
{
fmt_flags->width = width;
}
}
