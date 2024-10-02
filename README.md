# Project Name: Libft

## Introduction

**Libft** is a project aimed at creating a personal library of functions that can be used in future C programming projects. The library will include standard functions from various libraries as well as some custom utility functions.

## File Structure

The file structure for this project is organized as follows:


### Source Files (`.c` Files)

All your function implementations will be located in the `src/` directory. Each function should be modular and well-documented.

### Header File (`libft.h`)

The header file serves two main purposes:

1. It allows you to include common headers (e.g., `<unistd.h>`) only once, making your source files cleaner and easier to manage.
2. It facilitates function declarations across different source files. If one of your `.c` files needs to use a function from another file, simply include `#include "libft.h"` at the top of that file.

Ensure to add `#include "libft.h"` in all your `.c` files to maintain consistency.

### Makefile

The `Makefile` is used to automate the compilation of your project. By defining the necessary build instructions, you can simply run `make` in your terminal, and it will compile your library without needing to specify each file individually.

## Functions Overview

### Functions from `<ctype.h>`

- **ft_isalpha**: Checks for an alphabetic character.
- **ft_isdigit**: Checks for a digit (0 through 9).
- **ft_isalnum**: Checks for an alphanumeric character.
- **ft_isascii**: Checks whether a character fits into the ASCII character set.
- **ft_isprint**: Checks for any printable character.
- **ft_toupper**: Converts a character to uppercase.
- **ft_tolower**: Converts a character to lowercase.

### Functions from `<string.h>`

- **ft_memset**: Fills memory with a constant byte.
- **ft_strlen**: Calculates the length of a string.
- **ft_bzero**: Sets a byte string to zero.
- **ft_memcpy**: Copies memory area.
- **ft_memmove**: Moves memory area.
- **ft_strlcpy**: Copies a string to a specific size.
- **ft_strlcat**: Concatenates a string to a specific size.
- **ft_strchr**: Locates a character in a string.
- **ft_strrchr**: Locates the last occurrence of a character in a string.
- **ft_strncmp**: Compares two strings.
- **ft_memchr**: Scans memory for a character.
- **ft_memcmp**: Compares memory areas.
- **ft_strnstr**: Locates a substring in a string.
- **ft_strdup**: Creates a duplicate of a string.

### Functions from `<stdlib.h>`

- **ft_atoi**: Converts a string to an integer.
- **ft_calloc**: Allocates memory and initializes it to zero.

### Non-Standard Functions

- **ft_substr**: Returns a substring from a string.
- **ft_strjoin**: Concatenates two strings.
- **ft_strtrim**: Trims characters from the beginning and end of a string.
- **ft_split**: Splits a string using a specified delimiter.
- **ft_itoa**: Converts an integer to a string.
- **ft_strmapi**: Applies a function to each character of a string.
- **ft_striteri**: Applies a function to each character of a string, passing the index.
- **ft_putchar_fd**: Outputs a character to a specified file descriptor.
- **ft_putstr_fd**: Outputs a string to a specified file descriptor.
- **ft_putendl_fd**: Outputs a string followed by a newline to a specified file descriptor.
- **ft_putnbr_fd**: Outputs an integer to a specified file descriptor.

### Linked List Functions

- **ft_lstnew**: Creates a new list element.
- **ft_lstadd_front**: Adds an element to the beginning of a list.
- **ft_lstsize**: Counts the number of elements in a list.
- **ft_lstlast**: Returns the last element of a list.
- **ft_lstadd_back**: Adds an element to the end of a list.
- **ft_lstclear**: Deletes and frees a list.
- **ft_lstiter**: Applies a function to each element of a list.
- **ft_lstmap**: Applies a function to each element of a list, returning a new list.

