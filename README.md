# Holberton-School Printf Project in C

## Team Introduction
Welcome to our custom implementation of the `printf` function in C. This project is a collaborative effort by [Fabien Pineau](https://github.com/NekodaMushi) and [Anthony Pizzoni](https://github.com/HINKOKO).

## Environment
The code has been tested and developed in the Ubuntu 20.04 LTS environment. Compilation is done using gcc with flags:
```
-Wall -Werror -Wextra -pedantic -std=gnu89
```

## Repository Contents

### Header Files
- `main.h`: Includes function prototypes and the structure used for format specifiers.

### Core Files
- `_printf.c`: Core file containing the `_printf` function, which mimics the standard C library's `printf` function. It takes a string and a variadic list of arguments, returning the number of characters printed.

### Utility Functions
#### String-related
- `_putchar.c`: Outputs a single character.
- `stringfunctions.c`: Contains utility functions for strings.
- `print_S.c`: Handles printing of special characters.

#### Numeric-related
- `print_int.c`: Prints integers.
- `print_uns.c`: Prints unsigned integers.
- `print_binary.c`: Prints binary representation.
- `print_hexa.c`: Prints hexadecimal representation.
- `print_octal.c`: Prints octal representation.

#### Special Functions
- `rot13_convert.c`: Converts a string using ROT13 encryption.

## Sample Usage

To convert a string into ROT13, you can use the `_printf` function like this:

```c
_printf("%R", "jr unq n ybg bs sha!");
```

The output will be:

```
we had a lot of fun!
```

## How to Use

1. Clone the repository: `git clone https://github.com/your-github-repo-link.git`
2. Navigate into the directory: `cd your-directory`
3. Compile the files: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output`
4. Run the output file: `./output`
