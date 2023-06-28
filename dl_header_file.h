#ifndef DL_HEADER_FILE_H
#define DL_HEADER_FILE_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include "struct.h"

int _printf(const char *format, ...);
int handles_buffer(char *_buff_cache, int size);
char *int_string(int al, int size, int var);
char *d_custom_specifier(va_list catalog_ls);
char *c_custom_specifier(va_list catalog_ls);

char *str_reverse_func(va_list catalog_ls);
char *copy_string(char *dga_var, char *_source);
char *cipher_rot13_func(va_list catalog_ls);
nt get_string_length(char *_string);
char *convert_to_base8(va_list catalog_ls);
char *s_custom_specifier(va_list catalog_ls);

void process_output_buffer(char *_buff_cache, int size, va_list catalog_ls);
char* (*find_conversion_function(char idnt))(va_list);
char *allocate_output_buffer(void);

char *convert_to_base2(va_list catalog_ls);
#endif
