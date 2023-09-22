#include "main.h"

/**
* handle_print - Selects the appropriate printing function
* based on the conversion specifier passed to _printf
* @specifier: The conversion specifier character
*
* Description: This function loops through an array of structs to find
* a match between the specifier passed to _printf and the first element
* of the struct. It then returns a pointer to the matching printing function.
*
* Return: A pointer to the matching printing function, or NULL if not found.
*/
int (*handle_print(char specifier))(va_list, fmt_flags_t *)
{
int i;

typedef struct {
char specifier;
int (*print_func)(va_list, fmt_flags_t *);
} print_sp;

print_sp print_specs[] = {
{'i', print_decimal},
{'s', print_string},
{'c', print_char},
{'d', print_decimal},
{'u', print_unsigned},
{'x', print_hex},
{'X', print_hex_upper},
{'b', print_binary},
{'o', print_octal},
{'R', print_rot13},
{'r', print_rev},
{'S', print_ascii},
{'p', print_pointer},
{'%', print_percent_symbol}
};

int num_print_specs = sizeof(print_specs) / sizeof(print_specs[0]);

for (i = 0; i < num_print_specs; i++) {
if (print_specs[i].specifier == specifier) {
return print_specs[i].print_func;
}
}

return (NULL);
}

