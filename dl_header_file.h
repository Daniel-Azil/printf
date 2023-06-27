#ifndef DL_HEADER_FILE_H
#ifdef DL_HEADER_FILE_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handles_buffer(char *_buff_cache, int size);

char *c_custom_specifier(va_list catalog_ls);

#endif
