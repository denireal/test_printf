#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @args: va_list arguments from _printf
 * @fmt_flags: pointer to the struct fmt_flags (unused)
 * Return: length of the printed string
 */
int print_rev(va_list args, fmt_flags_t *fmt_flags)
{
char *s;
int j, i = 0;

(void)fmt_flags;
s = va_arg(args, char *);

if (!s)
s = "(null)";

while (s[i])
i++;

for (j = i - 1; j >= 0; j--)
_putchar(s[j]);

return (i);
}
