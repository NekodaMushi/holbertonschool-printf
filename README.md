
# printf Project in C with Holberton-School

## General

Hello and Welcome ! We are Fabien Pineau and Anthony Pizzoni.For this first team project, we have created our own version of the printf function, in C langage.
Fabien is https://github.com/NekodaMushi on Github
Anthony is https://github.com/HINKOKO on Github.

## Requirements

For compiling: we use gcc, with the following options:
-Wall -Werror -Wextra -pedantic -std=gnu89
On Ubuntu 20.04 LTS.

## Compiled Files

### main.h

This file contains all prototypes of functions and the struct we use for printing with the right function

### _printf.C

The Keyfile for imitating printf function.
Our _printf takes as first argument a const char pointer, and second argument are of variadic type.
It returns an int, the number of character(s) printed.

### Other files

**String functions**

_putchar.c / stringfunctions.c / print_S.c

**Numeric functions**

print_int.c / print_uns.c / print_binary.c / print_hexa.c / print_octal.c / 

**Special**

rot13_convert.c

**Sample Example**

If you want to convert "jr unq n ybg bs sha!" in ROT13 you use the function like this

_printf("%R", "jr unq n ybg bs sha!") and the output will be :
"we had a lot of fun!".




