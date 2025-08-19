# ft_printf

A reimplementation of C’s `printf`, returning the number of characters written—just like the standard function.

---

## Build

```bash
# static library (libftprintf.a)
make

# object cleanup
make clean

# full cleanup
make fclean

# rebuild
make re
```

Link it like so:

```bash
cc main.c -L. -lftprintf -I. -o demo
```

If your project already has `libft.a`, you can link both:

```bash
cc main.c libft/libft.a libftprintf.a -Ilibft -I. -o demo
```

---

## Using the library

```c
#include "ft_printf.h"
```

---

## Supported conversions

Mandatory conversions implemented:

| Specifier  | Meaning                  | Example output    |
| ---------- | ------------------------ | ----------------- |
| `%c`       | Character                | `A`               |
| `%s`       | NUL-terminated string    | `hello`           |
| `%p`       | Pointer address          | `0x7ffeefbff5c0`  |
| `%d`, `%i` | Signed decimal integer   | `-123`, `0`, `42` |
| `%u`       | Unsigned decimal integer | `4294967295`      |
| `%x`       | Unsigned hex (lowercase) | `deadbeef`        |
| `%X`       | Unsigned hex (UPPERCASE) | `DEADBEEF`        |
| `%%`       | Literal `%`              | `%`               |


---


**Contributing / Issues**
Spotted undefined behavior or a mismatch with glibc’s `printf`? Please open an issue with a minimal example (format string + arguments, expected vs. actual output).
