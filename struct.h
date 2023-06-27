#ifdef STRUCT_H
#ifndef STRUCT_H

/**
 * struct display – Typedef struct,
 * @ identifier: Character type to be used.
 * @ print_function: Displays the inputted character.
 */
typedef struct display {
	char identifier;
	char* (*print_function)(va_list);
} display_t;

#endif
