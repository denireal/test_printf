#include "main.h"
#include <stdarg.h>
#include <stdbool.h>

/**
* handle_minus_flag - Update fmt_flags based on the '-' flag character
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
*
* Description: This function scans the format string for the '-' flag character
* and updates the fmt_flags accordingly.
*/
void handle_minus_flag(const char *fmt, fmt_flags_t *fmt_flags)
{
for (; *fmt != '\0'; fmt++)
{
if (*fmt == '-')
{
fmt_flags->minus = true;
}
}
}
