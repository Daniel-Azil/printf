# Custom Printf Function Implementation

## Overview

This repository contains an implementation of a custom `printf` function, designed to handle different format specifiers in C, providing formatted output. The implementation supports a variety of format specifiers and provides flexible formatting options.

## Features

- Custom implementation of `printf`
- Handles multiple format specifiers such as:
  - `%d` for integers
  - `%s` for strings
  - `%x` for hexadecimal output
  - `%o` for octal numbers
  - `%b` for binary numbers
  - Custom specifiers (e.g., `%r` for reversed strings)
- Handles various types of arguments, including integers, strings, and characters.
- Memory management for output buffer allocation and handling.
- Built-in support for converting numbers to different bases (binary, octal, hexadecimal).
- Efficient string and buffer manipulation.

## File Structure

. 
├── allocate_output_buffer.c        # Handles buffer allocation for output
├── buffer_handler_function.c       # Functions for buffer manipulation
├── cipher_rot13_function.c         # ROT13 cipher function for strings
├── conversation_function.c         # Handles conversion of specifiers
├── convert_to_base2_binary.c       # Converts integers to binary
├── convert_to_base8_binary.c       # Converts integers to octal
├── c_specifier.c                   # Handles %c format specifier
├── d_specifier.c                   # Handles %d format specifier
├── DL_print_function.c             # Main print function logic
├── int_str.c                       # Helper function for integer-to-string conversion
├── process_output_buffer.c         # Processes the output buffer for formatting
├── str_reverse_function.c          # Reverses a string for %r specifier
├── copy_string_function.c          # Copies strings for handling
├── get_string_length.c             # Calculates the length of a string
├── main.h                          # Header file for function declarations
├── struct.h                        # Header file for struct definitions
└── README.md                       # Project documentation



## Usage

To use the custom `printf` implementation, include the necessary header files in your C program and call the `my_printf` function with the desired format string and arguments. Example usage:

```c
#include "main.h"

int main(void)
{
    my_printf("Hello, %s!\n", "World");
    my_printf("Hex value: %x\n", 255);
    return 0;
}
```

## Functions

- **`my_printf(const char *format, ...)`**: Main function to handle formatted output.
- **`allocate_output_buffer()`**: Allocates memory for the output buffer.
- **`buffer_handler()`**: Manages the output buffer.
- **`convert_to_base2_binary()`**: Converts an integer to binary.
- **`convert_to_base8_binary()`**: Converts an integer to octal.
- **`process_output_buffer()`**: Processes the buffer before output.
- **`str_reverse_function()`**: Reverses a string for the custom `%r` specifier.
- **`copy_string_function()`**: Copies strings safely.
- **`get_string_length()`**: Calculates the length of a string.

## Testing

You can test the custom printf implementation by running the C program with different format specifiers. Ensure that all expected outputs are printed correctly.

```bash
gcc -Wall -Werror -Wextra -o test_program main.c
./test_program
```

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgements
Thanks to the C programming community for their inspiration and contributions to custom printing functions. Special thanks to all the open-source projects that have made this implementation possible. Acknowledgement is also given to Lumka Mputa for her contributions to the project.
