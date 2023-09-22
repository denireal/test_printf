#include "main.h"

/**
* print_non_printable - prints non-printable characters as
* \x followed by ASCII code
* @l: va_list arguments from _printf
* @f: pointer to the struct fmt_flags that determines if a flag
* is passed to _printf
* Return: number of characters printed
*/
int print_ascii(va_list l, fmt_flags_t *f)
{
int i, count = 0;
char *res;
char *s = va_arg(l, char *);

(void)f;
if (!s)
return (_puts("(null)"));

for (i = 0; s[i]; i++)
{
if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
{
_puts("\\x");
count += 2;
res = convert((unsigned long int)s[i], 16, 0);
if (!res[1])
count += _putchar('0');
count += _puts(res);
}
else
count += _putchar(s[i]);
}
return (count);
}
