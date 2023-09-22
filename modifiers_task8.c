#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
* handle_length_modifier - Update fmt_flags based on length modifiers
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
*
* Description: This function scans the format string for length modifiers 'l' and 'h'
* and updates the fmt_flags accordingly.
*/
void handle_length_modifier(const char *fmt, fmt_flags_t *fmt_flags)
{
for (; *fmt != '\0'; fmt++)
{
if (*fmt == 'l')
{
fmt_flags->l = 1;
}
else if (*fmt == 'h')
{
fmt_flags->h = 1;
}
}
}
