#include "dl_header_file"

/**
 * _printf - Lumka and Azil custom printf function.
 * @format: Character string containing all the format specifiers.
 *
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
	char *buff_cache; 
	char *input;

	if (format == NULL)
		return (-1);

	buff_cache = create_buffer();
	if (buff_cache == NULL)
		return (-1);

	va_start(catalog_ls, format);

	while (format[var] != '\0')
	{
		if (format[var] != '%')
		{
			size = handles_buffer(buff_cache, size);
			buff_cache[size++] = format[var++];
			_size_total++;
		}
		else
		{
			var++;
			if (format[var] == '\0')
			{
				va_end(catalog_ls);
				free(buff_cache);
				return (-1);
			}
			if (format[var] == '%')
			{
				size = handles_buffer(buff_cache, size);
				buff_cache[size++] = format[var];
				_size_total++;
			}
			else
			{
				pnt = get_func(format[var]);
				if (pnt == NULL)
				{
					size = handles_buffer(buff_cache, size);
					buff_cache[size++] = '%'; _size_total++;
					buff_cache[size++] = format[var]; _size_total++;
				}
				else
				{
					input = pnt(catalog_ls);
					if (input == NULL)
					{
						va_end(catalog_ls);
						free(buff_cache);
						return (-1);
					}
					if (format[var] == 'c' && input[0] == '\0')
					{
						size = handles_buffer(buff_cache, size);
						buff_cache[size++] = '\0';
						_size_total++;
					}
					al_var = 0;
					while (input[al_var] != '\0')
					{
						size = handles_buffer(buff_cache, size);
						buff_cache[size++] = input[al_var];
						_size_total++; al_var++;
					}
					free(input);
				}
			} var++;
		}
	}
	process_output_buffer(buff_cache, size, catalog_ls);
	return (_size_total);
}
