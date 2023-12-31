#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* print_rot13 - prints a string using ROT13 encoding
* @l: va_list arguments from _printf
* @f: pointer to the struct fmt_flags that determines if a
* flag is passed to _printf
* Return: length of the printed string
*/
int print_rot13(va_list l, fmt_flags_t *f)
{
int i, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *s = va_arg(l, char *);

(void)f;
for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (i = 0; i <= 52; i++)
{
if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
}

return (j);
}
