#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
/**
* handle_zero_flag - Update fmt_flags based on the '0' flag character
* @fmt: Format string
* @fmt_flags: Pointer to the struct fmt_flags
*
* Description: This function scans the format string for the '0' flag character
* and updates the fmt_flags accordingly.
*/
void handle_zero_flag(const char *fmt, fmt_flags_t *fmt_flags)
{
for (; *fmt != '\0'; fmt++)
{
if (*fmt == '0')
{
fmt_flags->zero = true;
}
}
}
