# ft_printf - Custom Printf Implementation

## Overview

This project is a custom implementation of the C standard library function `printf()`. The implementation supports various format specifiers and provides a similar functionality to the standard `printf()` function.

## Features

This implementation of `printf()` supports the following format specifiers:

| Specifier |                        Description                       |
|-----------|----------------------------------------------------------|
| `%c`      | Print a single character                                 |
| `%s`      | Print a string                                           |
| `%p`      | Print a pointer address in hexadecimal format            |
| `%d`      | Print a decimal (base 10) number                         |
| `%i`      | Print an integer in base 10                              |
| `%u`      | Print an unsigned decimal (base 10) number               |
| `%x`      | Print a number in hexadecimal (base 16) lowercase format |
| `%X`      | Print a number in hexadecimal (base 16) uppercase format |
| `%%`      | Print a percent sign                                     |

## Project Structure

The project consists of several files:

- **ft_printf.c**: Contains the main implementation of the `ft_printf` function and format specifier handling
- **ft_printf.h**: Header file with function declarations and necessary includes
- **ft_printer.c**: Contains functions to print various data types (integers, strings, pointers)
- **ft_util.c**: Contains utility functions used by the main implementation
- **Makefile**: Compiles the project and creates the library
- **libft/**: Directory containing a custom C library with basic functions

## Implementation Details

The implementation uses variadic functions from the `<stdarg.h>` library to handle a variable number of arguments. The main function `ft_printf` parses the format string and delegates printing to appropriate functions based on the encountered format specifiers.

Key aspects of the implementation:

- Uses a helper function `ft_print` to dispatch to the appropriate printer based on the format specifier
- Returns the total number of characters printed, just like the original `printf`
- Handles null pointers and strings with appropriate messages
- Uses recursive approaches for printing numbers in different bases
- Leverages the custom libft library functions for basic operations

## How to Use

### Compilation

To compile the library, run:

```bash
make
```

This will create a static library `libftprintf.a` that you can link with your programs.

### Cleaning Up

To clean up the object files:

```bash
make clean
```

To remove all generated files (object files and the library):

```bash
make fclean
```

To rebuild the project:

```bash
make re
```

### Using in Your Code

Include the header file in your code:

```c
#include "ft_printf.h"
```

Compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror your_program.c -L. -lftprintf -o your_program
```

Example usage:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, world!");
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Integer: %d or %i\n", 42, 42);
    ft_printf("Unsigned: %u\n", 4294967295);
    ft_printf("Hexadecimal: %x or %X\n", 255, 255);
    ft_printf("Percent sign: %%\n");
    
    return (0);
}
```
