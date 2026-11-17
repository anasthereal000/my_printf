<<<<<<< HEAD
# my_printf
A recreation of the C printf function, built with variadic arguments. 42 school project.
=======
*This project has been created as part of the 42 curriculum by anboujel.*

# ft_printf

## Description

`ft_printf` is a re-implementation of the C library function `printf`, built as a static library (`libftprintf.a`). The goal is to learn how **variadic functions** work in C (`va_list`, `va_start`, `va_arg`, `va_end`).

Supported conversions: `c` `s` `p` `d` `i` `u` `x` `X` `%`

| Conversion | Output |
|---|---|
| `%c` | a single character |
| `%s` | a string (`(null)` if the pointer is NULL) |
| `%p` | a pointer in hexadecimal (`(nil)` if NULL) |
| `%d` `%i` | a signed decimal integer |
| `%u` | an unsigned decimal integer |
| `%x` `%X` | an unsigned hexadecimal number, lowercase / uppercase |
| `%%` | a percent sign |

The function returns the number of characters printed, or `-1` on error (for example, a `NULL` format string or a failed `write`).

## Instructions

**Build**

```bash
make          # builds libftprintf.a
make clean    # removes object files
make fclean   # removes object files and the library
make re       # rebuilds everything
```

**Use**

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, you are %d years old.\n", "world", 42);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o test
```

## Algorithm and data structure

**Parsing.** The format string is read one character at a time. Normal characters are written directly with `write`. When a `%` is found, the next character selects the conversion, and a dispatcher function calls the matching helper with the current argument.

**Arguments.** A single `va_list` is created with `va_start` and passed by pointer to the dispatcher. Each helper takes its argument with `va_arg`, so the list advances correctly across calls. `va_end` is called once at the end.

**Number printing.** Numbers are printed recursively: divide by the base, print the higher digits first, then the last digit. `INT_MIN` is handled by converting to a wider type before negating. Hexadecimal output uses a base string (`0123456789abcdef` or `0123456789ABCDEF`). Pointers are printed as `0x` followed by the hexadecimal value.

**Return value.** Every helper returns the number of characters it wrote, and the total is accumulated. If any `write` fails, the function returns `-1`.

**Justification.** The design needs no dynamic memory (no leaks possible) and no buffer, as the subject requires. Splitting each conversion into its own small function keeps the code within the Norm and makes it easy to extend with new conversions or flags.

## Resources

- `man 3 printf`, `man 3 stdarg`, `man 2 write`
- The C standard library documentation for variadic functions
- System V AMD64 ABI, for how variadic arguments are passed

**Use of AI:** AI was used as a learning aid to understand variadic functions and the `va_list` structure, to learn gdb for debugging, and to help write the Makefile. The design and implementation were tested and understood by the author.
>>>>>>> f3344d3 (ft_printf first push)
