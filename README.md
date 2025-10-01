# ft_printf

A simplified reimplementation of the `printf` function in C.

## Description

This project implements a basic version of `printf` that supports the following specifiers:

- `%c` - Character
- `%s` - String
- `%d` / `%i` - Integer
- `%u` - Unsigned integer
- `%x` / `%X` - Hexadecimal (lowercase/uppercase)
- `%p` - Pointer
- `%%` - Literal %

## Compilation

```bash
make
```

## Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}
```

Compile with: `cc file.c libftprintf.a`

---
