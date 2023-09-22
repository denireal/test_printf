#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* handle_flags - Update fmt_flags based on flag characters
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
*
* Description: This function scans the format string for flag characters
* '+' (plus), ' ' (space), and '#' (hash) and updates the fmt_flags.
*/
void handle_flags(const char *fmt, fmt_flags_t *fmt_flags)
{
for (; *fmt != '\0'; fmt++)
{
if (*fmt == '+')
{
fmt_flags->plus = 1;
}
else if (*fmt == ' ')
{
fmt_flags->space = 1;
}
else if (*fmt == '#')
{
fmt_flags->hash = 1;
}
}
}
