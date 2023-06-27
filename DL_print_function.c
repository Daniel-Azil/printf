#include "dl_header_file.h"

/**
 * _printf - Lumka and Azil custom printf function.
 * @format: Character string containing all the format specifiers.
 * Return: Character sequence with expanded format specifiers.
 */
int _printf(const char *format, ...)
{
	int _size_total = 0;
	int size = 0;
	int var = 0;
	int = al_var = 0;
	va_list catalog_ls;
	char* (*pnt)(va_list);
	char *_buff_cache; 
	char *input;

	if (format == NULL)
		return (-1);

	_buff_cache = allocate_output_buffer();
	if (_buff_cache == NULL)
		return (-1);

	va_start(catalog_ls, format);

	while (format[var] != '\0')
	{
		if (format[var] != '%')
		{
			size = handles_buffer(_buff_cache, size);
			_buff_cache[size++] = format[var++];
			_size_total++;
		}
		else
		{
			var++;
			if (format[var] == '\0')
			{
				va_end(catalog_ls);
				free(_buff_cache);
				return (-1);
			}
			if (format[var] == '%')
			{
				size = handles_buffer(_buff_cache, size);
				_buff_cache[size++] = format[var];
				_size_total++;
			}
			else
			{
				pnt = find_conversion_function(format[var]);
				if (pnt == NULL)
				{
					size = handles_buffer(_buff_cache, size);
					_buff_cache[size++] = '%'; _size_total++;
					_buff_cache[size++] = format[var]; _size_total++;
				}
				else
				{
					input = pnt(catalog_ls);
					if (input == NULL)
					{
						va_end(catalog_ls);
						free(_buff_cache);
						return (-1);
					}
					if (format[var] == 'c' && input[0] == '\0')
					{
						size = handles_buffer(_buff_cache, size);
						_buff_cache[size++] = '\0';
						_size_total++;
					}
					al_var = 0;
					while (input[al_var] != '\0')
					{
						size = handles_buffer(_buff_cache, size);
						_buff_cache[size++] = input[al_var];
						_size_total++; al_var++;
					}
					free(input);
				}
			} var++;
		}
	}
	process_output_buffer(_buff_cache, size, catalog_ls);
	return (_size_total);
}
